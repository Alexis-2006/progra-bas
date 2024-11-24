#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Negocio {
    int codigo;      
    string nombre;   
    int valor;       
};


void mostrar(Negocio arreglo[], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        cout << "Codigo: " << arreglo[i].codigo << ", Nombre: " << arreglo[i].nombre << ", Valor: " << arreglo[i].valor << endl;
    }
}


void llenarLista(Negocio arreglo[], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        cout << "Ingrese el codigo del articulo " << i + 1 << ": ";
        cin >> arreglo[i].codigo;
        cout << "Ingrese el nombre del articulo " << i + 1 << ": ";
        cin.ignore();
        getline(cin, arreglo[i].nombre);
        cout << "Ingrese el valor (precio) del articulo " << i + 1 << ": ";
        cin >> arreglo[i].valor;
    }
}


int sumarTercerAtributo(Negocio arreglo[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arreglo[i].valor;
    }
    return suma;
}


void modificar(Negocio arreglo[], int tamaño, int codigo, int nuevoCodigo, string nuevoNombre, int nuevoValor) {
    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i].codigo == codigo) {
            arreglo[i].codigo = nuevoCodigo;
            arreglo[i].nombre = nuevoNombre;
            arreglo[i].valor = nuevoValor;
            cout << "Elemento modificado exitosamente." << endl;
            return;
        }
    }
    cout << "Elemento con codigo " << codigo << " no encontrado." << endl;
}


void eliminar(Negocio arreglo[], int tamaño, int codigo) {
    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i].codigo == codigo) {
            arreglo[i].codigo = 0;
            arreglo[i].nombre = "";
            arreglo[i].valor = 0;
            cout << "Elemento eliminado exitosamente." << endl;
            return;
        }
    }
    cout << "Elemento con codigo " << codigo << " no encontrado." << endl;
}

int main() {
    int N;
    cout << "Ingrese la cantidad de articulos que desea almacenar: ";
    cin >> N;

    Negocio* arreglo = new Negocio[N]; 

    llenarLista(arreglo, N);

    cout << "\nLista de articulos ingresados:\n";
    mostrar(arreglo, N);

    cout << "\nLa suma del tercer atributo (valor) es: " << sumarTercerAtributo(arreglo, N) << endl;

    int codigo, nuevoCodigo, nuevoValor;
    string nuevoNombre;
    cout << "\nIngrese el código del elemento a modificar: ";
    cin >> codigo;
    cout << "Ingrese el nuevo codigo: ";
    cin >> nuevoCodigo;
    cout << "Ingrese el nuevo nombre: ";
    cin.ignore();
    getline(cin, nuevoNombre);
    cout << "Ingrese el nuevo valor: ";
    cin >> nuevoValor;

    modificar(arreglo, N, codigo, nuevoCodigo, nuevoNombre, nuevoValor);
    
    cout << "\nLista de articulos despues de la modificacion:\n";
    mostrar(arreglo, N);

    cout << "\nIngrese el codigo del elemento a eliminar: ";
    cin >> codigo;
    eliminar(arreglo, N, codigo);

    cout << "\nLista de artículos despues de la eliminacion:\n";
    mostrar(arreglo, N);

    delete[] arreglo; 
    return 0;
}
