#include <iostream>
#include <string>
using namespace std;

class Avion {
private:
    string modelo;
    int capacidad; // número de pasajeros
    float velocidadMaxima; // en km/h

public:
    Avion(string modelo, int capacidad, float velocidadMaxima) {
        this->modelo = modelo;
        this->capacidad = capacidad;
        this->velocidadMaxima = velocidadMaxima;
    }

    string getModelo() const {
        return modelo;
    }

    void setModelo(const string &nuevoModelo) {
        modelo = nuevoModelo;
    }

    int getCapacidad() const {
        return capacidad;
    }

    void setCapacidad(int nuevaCapacidad) {
        capacidad = nuevaCapacidad;
    }

    float getVelocidadMaxima() const {
        return velocidadMaxima;
    }

    void setVelocidadMaxima(float nuevaVelocidadMaxima) {
        velocidadMaxima = nuevaVelocidadMaxima;
    }

    void mostrarInformacion() const {
        cout << "Modelo: " << modelo << endl;
        cout << "Capacidad: " << capacidad << " pasajeros" << endl;
        cout << "Velocidad Máxima: " << velocidadMaxima << " km/h" << endl;
    }
};

int main() {
    Avion avion1("Boeing 747", 416, 933.0);

    cout << "Información del avion1:" << endl;
    avion1.mostrarInformacion();

    avion1.setModelo("Airbus A380");
    avion1.setCapacidad(853);
    avion1.setVelocidadMaxima(1020.0);

    cout << "\nInformación actualizada del avion1:" << endl;
    avion1.mostrarInformacion();

    return 0;
}
