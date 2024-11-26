#include <iostream>
#include <string>
using namespace std;

class Bote {
protected:
    string nombre;
    double longitud;  

public:
    Bote(const string& nombre, double longitud) : nombre(nombre), longitud(longitud) {}

    void mostrarDatosBote() const {
        cout << "Nombre del bote: " << nombre << endl;
        cout << "Longitud: " << longitud << " metros" << endl;
    }
};

class BoteDeMotor : virtual public Bote {
protected:
    int potenciaMotor; 

public:
    BoteDeMotor(const string& nombre, double longitud, int potenciaMotor)
        : Bote(nombre, longitud), potenciaMotor(potenciaMotor) {}

    void mostrarDatosBoteDeMotor() const {
        mostrarDatosBote();
        cout << "Potencia del motor: " << potenciaMotor << " HP" << endl;
    }
};

class BoteDeVela : virtual public Bote {
protected:
    int areaVela;  

public:
    BoteDeVela(const string& nombre, double longitud, int areaVela)
        : Bote(nombre, longitud), areaVela(areaVela) {}

    void mostrarDatosBoteDeVela() const {
        mostrarDatosBote();
        cout << "Área de la vela: " << areaVela << " m²" << endl;
    }
};

class BoteHibrido : public BoteDeMotor, public BoteDeVela {
private:
    double autonomia;  

public:
    BoteHibrido(const string& nombre, double longitud, int potenciaMotor, int areaVela, double autonomia)
        : Bote(nombre, longitud), BoteDeMotor(nombre, longitud, potenciaMotor), BoteDeVela(nombre, longitud, areaVela), autonomia(autonomia) {}

    void mostrarDatosBoteHibrido() const {
        mostrarDatosBoteDeMotor();
        cout << "Área de la vela: " << areaVela << " m²" << endl;
        cout << "Autonomía: " << autonomia << " horas" << endl;
    }
};

int main() {
    BoteHibrido boteHibrido("Aventurero", 12.5, 300, 50, 15.0);
    boteHibrido.mostrarDatosBoteHibrido();

    return 0;
}
