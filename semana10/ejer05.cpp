#include <iostream>
#include <string>
using namespace std;


class Coche {
private:
    string marca;
    string modelo;
    int anio;

public:
    Coche(string marca, string modelo, int anio) {
        this->marca = marca;
        this->modelo = modelo;
        this->anio = anio;
    }

    string getMarca() const {
        return marca;
    }

    void setMarca(const string &nuevaMarca) {
        marca = nuevaMarca;
    }

    string getModelo() const {
        return modelo;
    }

    void setModelo(const string &nuevoModelo) {
        modelo = nuevoModelo;
    }

    int getAnio() const {
        return anio;
    }

    void setAnio(int nuevoAnio) {
        anio = nuevoAnio;
    }

    void mostrarInformacion() const {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << anio << endl;
    }
};

int main() {

    Coche coche1("Toyota", "Corolla", 2020);

    cout << "Información del coche1:" << endl;
    coche1.mostrarInformacion();


    coche1.setMarca("Honda");
    coche1.setModelo("Civic");
    coche1.setAnio(2022);

    cout << "\nInformación actualizada del coche1:" << endl;
    coche1.mostrarInformacion();

    return 0;
}
