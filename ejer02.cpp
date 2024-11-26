#include <iostream>
#include <string>
using namespace std;


class Vehiculo {
protected:
    string marca;
    int anio;

public:
    Vehiculo(string marca, int anio) : marca(marca), anio(anio) {}

    void mostrarInformacion() const {
        cout << "Marca: " << marca << ", Año: " << anio << endl;
    }
};

class Carro : virtual public Vehiculo {
protected:
    int numPuertas;

public:
    Carro(string marca, int anio, int numPuertas)
        : Vehiculo(marca, anio), numPuertas(numPuertas) {}

    void mostrarCarro() const {
        cout << "Número de puertas: " << numPuertas << endl;
    }
};

class Electrico : virtual public Vehiculo {
protected:
    int capacidadBateria;

public:
    Electrico(string marca, int anio, int capacidadBateria)
        : Vehiculo(marca, anio), capacidadBateria(capacidadBateria) {}

    void mostrarElectrico() const {
        cout << "Capacidad de batería: " << capacidadBateria << " kWh" << endl;
    }
};

class CarroElectrico : public Carro, public Electrico {
private:
    int autonomia;

public:
    CarroElectrico(string marca, int anio, int numPuertas, int capacidadBateria, int autonomia)
        : Vehiculo(marca, anio), Carro(marca, anio, numPuertas), Electrico(marca, anio, capacidadBateria), autonomia(autonomia) {}

    void mostrarInformacionCompleta() const {
        Vehiculo::mostrarInformacion(); // Evitar ambigüedad
        mostrarCarro();
        mostrarElectrico();
        cout << "Autonomía: " << autonomia << " km" << endl;
    }
};

int main() {
    CarroElectrico teslaModel3("Tesla", 2023, 4, 75, 500);

    cout << "Información completa del carro eléctrico:\n";
    teslaModel3.mostrarInformacionCompleta();

    return 0;
}
