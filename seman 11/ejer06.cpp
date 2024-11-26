#include <iostream>
#include <string>
using namespace std;

class Perro {
protected:
    string nombre;
    int edad;  

public:
    Perro(const string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarDatosPerro() const {
        cout << "Nombre del perro: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

class PerroDeCaza : virtual public Perro {
protected:
    string raza; 
public:
    PerroDeCaza(const string& nombre, int edad, const string& raza)
        : Perro(nombre, edad), raza(raza) {}

    void mostrarDatosPerroDeCaza() const {
        mostrarDatosPerro();
        cout << "Raza de caza: " << raza << endl;
    }
};

class PerroDeTrabajo : virtual public Perro {
protected:
    string tipoTrabajo; 

public:
    PerroDeTrabajo(const string& nombre, int edad, const string& tipoTrabajo)
        : Perro(nombre, edad), tipoTrabajo(tipoTrabajo) {}

    void mostrarDatosPerroDeTrabajo() const {
        mostrarDatosPerro();
        cout << "Tipo de trabajo: " << tipoTrabajo << endl;
    }
};

class PerroHibrido : public PerroDeCaza, public PerroDeTrabajo {
private:
    string habilidadesAdicionales;  

public:
    PerroHibrido(const string& nombre, int edad, const string& raza, const string& tipoTrabajo, const string& habilidadesAdicionales)
        : Perro(nombre, edad), PerroDeCaza(nombre, edad, raza), PerroDeTrabajo(nombre, edad, tipoTrabajo), habilidadesAdicionales(habilidadesAdicionales) {}

    void mostrarDatosPerroHibrido() const {
        mostrarDatosPerroDeCaza();
        cout << "Tipo de trabajo: " << tipoTrabajo << endl;
        cout << "Habilidades adicionales: " << habilidadesAdicionales << endl;
    }
};

int main() {
    PerroHibrido perroHibrido("Max", 5, "Labrador", "Perro guía", "Detección de drogas");
    perroHibrido.mostrarDatosPerroHibrido();

    return 0;
}
