#include <iostream>
#include <string>
using namespace std;

class Avion {
protected:
    string modelo;
    double envergadura; 

public:
    Avion(const string& modelo, double envergadura) : modelo(modelo), envergadura(envergadura) {}

    void mostrarDatosAvion() const {
        cout << "Modelo del avión: " << modelo << endl;
        cout << "Envergadura: " << envergadura << " metros" << endl;
    }
};

class AvionDeMotor : virtual public Avion {
protected:
    int potenciaMotor;  

public:
    AvionDeMotor(const string& modelo, double envergadura, int potenciaMotor)
        : Avion(modelo, envergadura), potenciaMotor(potenciaMotor) {}

    void mostrarDatosAvionDeMotor() const {
        mostrarDatosAvion();
        cout << "Potencia del motor: " << potenciaMotor << " HP" << endl;
    }
};

class AvionDeHelice : virtual public Avion {
protected:
    int numHelices; 

public:
    AvionDeHelice(const string& modelo, double envergadura, int numHelices)
        : Avion(modelo, envergadura), numHelices(numHelices) {}

    void mostrarDatosAvionDeHelice() const {
        mostrarDatosAvion();
        cout << "Número de hélices: " << numHelices << endl;
    }
};

class AvionHibrido : public AvionDeMotor, public AvionDeHelice {
private:
    double autonomia;  

public:
    AvionHibrido(const string& modelo, double envergadura, int potenciaMotor, int numHelices, double autonomia)
        : Avion(modelo, envergadura), AvionDeMotor(modelo, envergadura, potenciaMotor), AvionDeHelice(modelo, envergadura, numHelices), autonomia(autonomia) {}

    void mostrarDatosAvionHibrido() const {
        mostrarDatosAvionDeMotor();
        cout << "Número de hélices: " << numHelices << endl;
        cout << "Autonomía: " << autonomia << " horas" << endl;
    }
};

int main() {
    AvionHibrido avionHibrido("Híbrido-2025", 35.0, 2000, 4, 10.5);
    avionHibrido.mostrarDatosAvionHibrido();

    return 0;
}
