#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:

    Libro(string titulo, string autor, int anioPublicacion) {
        this->titulo = titulo;
        this->autor = autor;
        this->anioPublicacion = anioPublicacion;
    }

    string getTitulo() const {
        return titulo;
    }

    void setTitulo(const string &nuevoTitulo) {
        titulo = nuevoTitulo;
    }

    string getAutor() const {
        return autor;
    }

    void setAutor(const string &nuevoAutor) {
        autor = nuevoAutor;
    }

    int getAnioPublicacion() const {
        return anioPublicacion;
    }

    void setAnioPublicacion(int nuevoAnio) {
        anioPublicacion = nuevoAnio;
    }

    void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de Publicación: " << anioPublicacion << endl;
    }
};

int main() {

    Libro libro1("Cien Años de Soledad", "Gabriel Garcia Marquez", 1967);

    cout << "Información del libro1:" << endl;
    libro1.mostrarInformacion();

    libro1.setTitulo("El Amor en los Tiempos del Cólera");
    libro1.setAutor("Gabriel Garcia Marquez");
    libro1.setAnioPublicacion(1985);

    cout << "\nInformación actualizada del libro1:" << endl;
    libro1.mostrarInformacion();

    return 0;
}
