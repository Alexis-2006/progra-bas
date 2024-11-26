#include <iostream>
#include <string>
using namespace std;

class Rata {
protected:
    string nombre;
    int edad;  
public:
    Rata(const string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarDatosRata() const {
        cout << "Nombre de la rata: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

class RataDeLaboratorio : virtual public Rata {
protected:
    string areaInvestigacion;  

public:
    RataDeLaboratorio(const string& nombre, int edad, const string& areaInvestigacion)
        : Rata(nombre, edad), areaInvestigacion(areaInvestigacion) {}

    void mostrarDatosRataDeLaboratorio() const {
        mostrarDatosRata();
        cout << "Área de investigación: " << areaInvestigacion << endl;
    }
};

// Clase RataDeCampo (hereda de Rata)
class RataDeCampo : virtual public Rata {
protected:
    string tipoDeAmbiente;  

public:
    RataDeCampo(const string& nombre, int edad, const string& tipoDeAmbiente)
        : Rata(nombre, edad), tipoDeAmbiente(tipoDeAmbiente) {}

    void mostrarDatosRataDeCampo() const {
        mostrarDatosRata();
        cout << "Tipo de ambiente: " << tipoDeAmbiente << endl;
    }
};

// Clase RataHibrida (hereda de RataDeLaboratorio y RataDeCampo)
class RataHibrida : public RataDeLaboratorio, public RataDeCampo {
private:
    string habilidadesEspeciales;  

public:
    RataHibrida(const string& nombre, int edad, const string& areaInvestigacion, const string& tipoDeAmbiente, const string& habilidadesEspeciales)
        : Rata(nombre, edad), RataDeLaboratorio(nombre, edad, areaInvestigacion), RataDeCampo(nombre, edad, tipoDeAmbiente), habilidadesEspeciales(habilidadesEspeciales) {}

    void mostrarDatosRataHibrida() const {
        mostrarDatosRataDeLaboratorio();
        cout << "Tipo de ambiente: " << tipoDeAmbiente << endl;
        cout << "Habilidades especiales: " << habilidadesEspeciales << endl;
    }
};

int main() {
    RataHibrida rataHibrida("Rata Científica", 2, "Farmacología", "Urbano", "Resistencia a enfermedades");
    rataHibrida.mostrarDatosRataHibrida();

    return 0;
}
