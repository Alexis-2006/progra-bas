#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    float altura;

public:
    Persona(string nombre, int edad, float altura) {
        this->nombre = nombre;
        this->edad = edad;
        this->altura = altura;
    }

    string getNombre() const {
        return nombre;
    }

    void setNombre(const string &nuevoNombre) {
        nombre = nuevoNombre;
    }

    // Get y set para edad
    int getEdad() const {
        return edad;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    // Get y set para altura
    float getAltura() const {
        return altura;
    }

    void setAltura(float nuevaAltura) {
        altura = nuevaAltura;
    }

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Altura: " << altura << " m" << endl;
    }
};

int main() {
    Persona persona1("Ana", 30, 1.65);

    cout << "Información de persona1:" << endl;
    persona1.mostrarInformacion();

    persona1.setNombre("Carlos");
    persona1.setEdad(35);
    persona1.setAltura(1.75);


    cout << "\nInformación actualizada de persona1:" << endl;
    persona1.mostrarInformacion();

    Persona persona2("jose", 30, 1.85);

    cout << "Información de persona2:" << endl;
    persona2.mostrarInformacion();

    persona2.setNombre("jesus");
    persona2.setEdad(35);
    persona2.setAltura(2.05);


    cout << "\nInformación actualizada de persona1:" << endl;
    persona2.mostrarInformacion();

    return 0;
}
