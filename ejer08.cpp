#include <iostream>
#include <string>
using namespace std;

class Aguila {
protected:
    string nombre;
    int edad;  

public:
    Aguila(const string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarDatosAguila() const {
        cout << "Nombre del águila: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

class AguilaDeCima : virtual public Aguila {
protected:
    double altitudMaxima;  

public:
    AguilaDeCima(const string& nombre, int edad, double altitudMaxima)
        : Aguila(nombre, edad), altitudMaxima(altitudMaxima) {}

    void mostrarDatosAguilaDeCima() const {
        mostrarDatosAguila();
        cout << "Altitud máxima de vuelo: " << altitudMaxima << " metros" << endl;
    }
};

class AguilaDeBosque : virtual public Aguila {
protected:
    string tipoDeBosque;  

public:
    AguilaDeBosque(const string& nombre, int edad, const string& tipoDeBosque)
        : Aguila(nombre, edad), tipoDeBosque(tipoDeBosque) {}

    void mostrarDatosAguilaDeBosque() const {
        mostrarDatosAguila();
        cout << "Tipo de bosque: " << tipoDeBosque << endl;
    }
};

class AguilaHibrida : public AguilaDeCima, public AguilaDeBosque {
private:
    string dieta;  

public:
    AguilaHibrida(const string& nombre, int edad, double altitudMaxima, const string& tipoDeBosque, const string& dieta)
        : Aguila(nombre, edad), AguilaDeCima(nombre, edad, altitudMaxima), AguilaDeBosque(nombre, edad, tipoDeBosque), dieta(dieta) {}

    void mostrarDatosAguilaHibrida() const {
        mostrarDatosAguilaDeCima();
        cout << "Tipo de bosque: " << tipoDeBosque << endl;
        cout << "Dieta: " << dieta << endl;
    }
};

int main() {
    AguilaHibrida aguilaHibrida("Águila Real", 7, 4000.0, "Bosque templado", "Carnívora");
    aguilaHibrida.mostrarDatosAguilaHibrida();

    return 0;
}
