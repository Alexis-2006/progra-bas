#include <iostream>
#include <string>
using namespace std;

class Tortuga {
private:
    string especie;
    int edad;      // años
    float peso;    // kilogramos

public:
    Tortuga(string especie, int edad, float peso) {
        this->especie = especie;
        this->edad = edad;
        this->peso = peso;
    }

    string getEspecie() const {
        return especie;
    }

    void setEspecie(const string &nuevaEspecie) {
        especie = nuevaEspecie;
    }

    int getEdad() const {
        return edad;
    }

    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    float getPeso() const {
        return peso;
    }

    void setPeso(float nuevoPeso) {
        peso = nuevoPeso;
    }

    void mostrarInformacion() const {
        cout << "Especie: " << especie << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Peso: " << peso << " kg" << endl;
    }
};

int main() {
    Tortuga tortuga1("Tortuga Verde", 15, 80.5);

    cout << "Información de la tortuga1:" << endl;
    tortuga1.mostrarInformacion();

    tortuga1.setEspecie("Tortuga Carey");
    tortuga1.setEdad(20);
    tortuga1.setPeso(90.3);


    cout << "\nInformación actualizada de la tortuga1:" << endl;
    tortuga1.mostrarInformacion();

    return 0;
}
