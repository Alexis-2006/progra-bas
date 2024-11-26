#include <iostream>
#include <string>
using namespace std;

// Clase base Superheroe
class Superheroe {
protected:
    string nombre;
    int edad;  // en años
    string identidadSecreta;  // nombre real del superhéroe

public:
    Superheroe(const string& nombre, int edad, const string& identidadSecreta)
        : nombre(nombre), edad(edad), identidadSecreta(identidadSecreta) {}

    void mostrarDatosSuperheroe() const {
        cout << "Nombre del superhéroe: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Identidad secreta: " << identidadSecreta << endl;
    }
};

// Clase SuperheroeConPoderes (hereda de Superheroe)
class SuperheroeConPoderes : virtual public Superheroe {
protected:
    string poder;  // poder especial del superhéroe (ej. telequinesis, vuelo, super fuerza)

public:
    SuperheroeConPoderes(const string& nombre, int edad, const string& identidadSecreta, const string& poder)
        : Superheroe(nombre, edad, identidadSecreta), poder(poder) {}

    void mostrarDatosSuperheroeConPoderes() const {
        mostrarDatosSuperheroe();
        cout << "Poder: " << poder << endl;
    }
};

// Clase SuperheroeConHabilidades (hereda de Superheroe)
class SuperheroeConHabilidades : virtual public Superheroe {
protected:
    string habilidad;  // habilidad especial del superhéroe (ej. habilidades de lucha, inteligencia excepcional)

public:
    SuperheroeConHabilidades(const string& nombre, int edad, const string& identidadSecreta, const string& habilidad)
        : Superheroe(nombre, edad, identidadSecreta), habilidad(habilidad) {}

    void mostrarDatosSuperheroeConHabilidades() const {
        mostrarDatosSuperheroe();
        cout << "Habilidad: " << habilidad << endl;
    }
};

// Clase SuperheroeHibrido (hereda de SuperheroeConPoderes y SuperheroeConHabilidades)
class SuperheroeHibrido : public SuperheroeConPoderes, public SuperheroeConHabilidades {
private:
    string equipo;  // equipo o grupo con el que trabaja el superhéroe (ej. Vengadores, Liga de la Justicia)

public:
    SuperheroeHibrido(const string& nombre, int edad, const string& identidadSecreta, const string& poder, const string& habilidad, const string& equipo)
        : Superheroe(nombre, edad, identidadSecreta), SuperheroeConPoderes(nombre, edad, identidadSecreta, poder), SuperheroeConHabilidades(nombre, edad, identidadSecreta, habilidad), equipo(equipo) {}

    void mostrarDatosSuperheroeHibrido() const {
        mostrarDatosSuperheroeConPoderes();
        cout << "Habilidad: " << habilidad << endl;
        cout << "Equipo: " << equipo << endl;
    }
};

int main() {
    SuperheroeHibrido superheroeHibrido("Iron Man", 45, "Tony Stark", "Tecnología avanzada", "Inteligencia excepcional", "Vengadores");
    superheroeHibrido.mostrarDatosSuperheroeHibrido();

    return 0;
}
