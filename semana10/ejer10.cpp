#include <iostream>
#include <string>
using namespace std;

class Ave {
private:
    string especie;
    string color;
    float envergaduraAlas; //centímetros

public:
    Ave(string especie, string color, float envergaduraAlas) {
        this->especie = especie;
        this->color = color;
        this->envergaduraAlas = envergaduraAlas;
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

    float getEnvergaduraAlas() const {
        return envergaduraAlas;
    }

    void setEnvergaduraAlas(float nuevaEnvergaduraAlas) {
        envergaduraAlas = nuevaEnvergaduraAlas;
    }

    void mostrarInformacion() const {
        cout << "Especie: " << especie << endl;
        cout << "Color: " << color << endl;
        cout << "Envergadura de alas: " << envergaduraAlas << " cm" << endl;
    }
};

int main() {
    Ave ave1("Águila Real", "Marrón y Blanco", 220.5);

    cout << "Información del ave1:" << endl;
    ave1.mostrarInformacion();

    ave1.setEspecie("Halcón Peregrino");
    ave1.setColor("Gris y Blanco");
    ave1.setEnvergaduraAlas(120.0);

    cout << "\nInformación actualizada del ave1:" << endl;
    ave1.mostrarInformacion();

    return 0;
}
