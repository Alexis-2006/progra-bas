#include <iostream>
#include <string>
using namespace std;


class Tortuga {
protected:
    string nombre;
    int edad;  

public:
    Tortuga(const string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarDatosTortuga() const {
        cout << "Nombre de la tortuga: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};


class TortugaDeAgua : virtual public Tortuga {
protected:
    double profundidadMaxima;  

public:
    TortugaDeAgua(const string& nombre, int edad, double profundidadMaxima)
        : Tortuga(nombre, edad), profundidadMaxima(profundidadMaxima) {}

    void mostrarDatosTortugaDeAgua() const {
        mostrarDatosTortuga();
        cout << "Profundidad máxima de inmersión: " << profundidadMaxima << " metros" << endl;
    }
};


class TortugaTerrestre : virtual public Tortuga {
protected:
    double velocidadMaxima;  

public:
    TortugaTerrestre(const string& nombre, int edad, double velocidadMaxima)
        : Tortuga(nombre, edad), velocidadMaxima(velocidadMaxima) {}

    void mostrarDatosTortugaTerrestre() const {
        mostrarDatosTortuga();
        cout << "Velocidad máxima en tierra: " << velocidadMaxima << " km/h" << endl;
    }
};


class TortugaHibrida : public TortugaDeAgua, public TortugaTerrestre {
private:
    string habitat;  

public:
    TortugaHibrida(const string& nombre, int edad, double profundidadMaxima, double velocidadMaxima, const string& habitat)
        : Tortuga(nombre, edad), TortugaDeAgua(nombre, edad, profundidadMaxima), TortugaTerrestre(nombre, edad, velocidadMaxima), habitat(habitat) {}

    void mostrarDatosTortugaHibrida() const {
        mostrarDatosTortugaDeAgua();
        cout << "Velocidad máxima en tierra: " << velocidadMaxima << " km/h" << endl;
        cout << "Habitat: " << habitat << endl;
    }
};

int main() {
    TortugaHibrida tortugaHibrida("Tortuga Ninja", 10, 50.0, 2.5, "Ambos (agua y tierra)");
    tortugaHibrida.mostrarDatosTortugaHibrida();

    return 0;
}
