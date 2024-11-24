#include <iostream>
#include <string>
using namespace std;

class Tiburon {
private:
    string especie;
    float longitud;
    float peso;    

public:
    Tiburon(string especie, float longitud, float peso) {
        this->especie = especie;
        this->longitud = longitud;
        this->peso = peso;
    }

    string getEspecie() const {
        return especie;
    }

    void setEspecie(const string &nuevaEspecie) {
        especie = nuevaEspecie;
    }

    float getLongitud() const {
        return longitud;
    }

    void setLongitud(float nuevaLongitud) {
        longitud = nuevaLongitud;
    }

    float getPeso() const {
        return peso;
    }

    void setPeso(float nuevoPeso) {
        peso = nuevoPeso;
    }

    void mostrarInformacion() const {
        cout << "Especie: " << especie << endl;
        cout << "Longitud: " << longitud << " metros" << endl;
        cout << "Peso: " << peso << " kg" << endl;
    }
};

int main() {

    Tiburon tiburon1("Tiburón Blanco", 5.5, 1100);


    cout << "Información del tiburon1:" << endl;
    tiburon1.mostrarInformacion();

    tiburon1.setEspecie("Tiburón Martillo");
    tiburon1.setLongitud(4.0);
    tiburon1.setPeso(500);

    cout << "\nInformación actualizada del tiburon1:" << endl;
    tiburon1.mostrarInformacion();

    return 0;
}
