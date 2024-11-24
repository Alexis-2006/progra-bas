#include <iostream>
#include <string>
using namespace std;

class Pez {
private:

    string especie;
    string color;
    float tamano; // centímetros

public:
    Pez(string especie, string color, float tamano) {
        this->especie = especie;
        this->color = color;
        this->tamano = tamano;
    }

    string getEspecie() const {
        return especie;
    }

    void setEspecie(const string &nuevaEspecie) {
        especie = nuevaEspecie;
    }

    string getColor() const {
        return color;
    }

    void setColor(const string &nuevoColor) {
        color = nuevoColor;
    }

    float getTamano() const {
        return tamano;
    }

    void setTamano(float nuevoTamano) {
        tamano = nuevoTamano;
    }

    void mostrarInformacion() const {
        cout << "Especie: " << especie << endl;
        cout << "Color: " << color << endl;
        cout << "Tamaño: " << tamano << " cm" << endl;
    }
};

int main() {
    Pez pez1("Pez Payaso", "Naranja y Blanco", 15.0);

    cout << "Información del pez1:" << endl;
    pez1.mostrarInformacion();

    pez1.setEspecie("Pez Betta");
    pez1.setColor("Azul");
    pez1.setTamano(6.0);

    cout << "\nInformación actualizada del pez1:" << endl;
    pez1.mostrarInformacion();

    return 0;
}
