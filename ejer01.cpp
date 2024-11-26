#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

class Estudiante : virtual public Persona {
protected:
    string carrera;

public:
    Estudiante(string nombre, int edad, string carrera)
        : Persona(nombre, edad), carrera(carrera) {}

    void mostrarEstudiante() const {
        cout << "Carrera: " << carrera << endl;
    }
};

class Trabajador : virtual public Persona {
protected:
    string empresa;

public:
    Trabajador(string nombre, int edad, string empresa)
        : Persona(nombre, edad), empresa(empresa) {}

    void mostrarTrabajador() const {
        cout << "Empresa: " << empresa << endl;
    }
};

class EstudianteTrabajador : public Estudiante, public Trabajador {
private:
    double salario;

public:
    EstudianteTrabajador(string nombre, int edad, string carrera, string empresa, double salario)
        : Persona(nombre, edad), Estudiante(nombre, edad, carrera), Trabajador(nombre, edad, empresa), salario(salario) {}

    void mostrarInformacionCompleta() const {
        Persona::mostrarInformacion(); 
        mostrarEstudiante();
        mostrarTrabajador();
        cout << "Salario: $" << salario << endl;
    }
};


int main() {
    EstudianteTrabajador estTrab("Luis", 25, "Ingeniería", "Tech Solutions", 1500.0);

    cout << "Información completa del estudiante-trabajador:\n";
    estTrab.mostrarInformacionCompleta();

    return 0;
}


