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

class MotoCarretera : virtual public Vehiculo {
protected:
    int velocidadMaxima; // en km/h

public:
    MotoCarretera(string marca, int anio, int velocidadMaxima)
        : Vehiculo(marca, anio), velocidadMaxima(velocidadMaxima) {}

    void mostrarMotoCarretera() const {
        cout << "Velocidad máxima: " << velocidadMaxima << " km/h" << endl;
    }
};

class MotoOffRoad : virtual public Vehiculo {
protected:
    int suspension; // en mm

public:
    MotoOffRoad(string marca, int anio, int suspension)
        : Vehiculo(marca, anio), suspension(suspension) {}

    void mostrarMotoOffRoad() const {
        cout << "Suspensión: " << suspension << " mm" << endl;
    }
};

class MotoDualSport : public MotoCarretera, public MotoOffRoad {
private:
    string tipoTerreno; 

public:
    MotoDualSport(string marca, int anio, int velocidadMaxima, int suspension, string tipoTerreno)
        : Vehiculo(marca, anio), MotoCarretera(marca, anio, velocidadMaxima), MotoOffRoad(marca, anio, suspension), tipoTerreno(tipoTerreno) {}

    void mostrarInformacionCompleta() const {
        Vehiculo::mostrarInformacion(); 
        mostrarMotoCarretera();
        mostrarMotoOffRoad();
        cout << "Tipo de terreno preferido: " << tipoTerreno << endl;
    }
};

int main() {
    MotoDualSport motoMixta("Kawasaki", 2023, 180, 300, "Mixto (carretera y off-road)");

    cout << "Información completa de la moto dual-sport:\n";
    motoMixta.mostrarInformacionCompleta();

    return 0;
}
