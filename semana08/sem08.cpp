#include <iostream>
#include <vector>
using namespace std;
struct Grifo {
private:
    int id;
    string servicio;
    int precio;
public:
    void setDatos(int di, string service, int price) {
        id = di;
        servicio = service;
        precio = price;
    }
    // Muestra los datos de todos los servicios en el grifo
    void mostrar(const vector<Grifo>& array) const {
        cout << "\n--- Información de Servicios de Grifo ---" << endl;
        for (const auto& grifo : array) {
            cout << "ID: " << grifo.id
                 << ", Servicio: " << grifo.servicio
                 << ", Precio: " << grifo.precio << endl;
        }
    }
    // ingresar datos para cada servicio del grifo
    void ingresoDatos(vector<Grifo>& array) {
        cout << "\nIngrese los datos (id, servicio, precio) para cada servicio del grifo:\n";
        for (auto& grifo : array) {
            int di, price;
            string service;
            cout << "ID: ";
            cin >> di;
            cout << "Servicio: ";
            cin >> service;
            cout << "Precio: ";
            cin >> price;
            grifo.setDatos(di, service, price);
        }
    }
    // Sumar
    int sumarPrecios(const vector<Grifo>& array) const {
        int suma = 0;
        for (const auto& grifo : array) {
            suma += grifo.precio;
        }
        return suma;
    }
    // Modificar
    void modificar(vector<Grifo>& array, int id, int nuevoId, string nuevoServicio, int nuevoPrecio) {
        for (auto& grifo : array) {
            if (grifo.id == id) {
                grifo.setDatos(nuevoId, nuevoServicio, nuevoPrecio);
                cout << "Servicio de grifo modificado correctamente.\n";
                return;
            }
        }
        cout << "Servicio con ID " << id << " no encontrado.\n";
    }
    // Eliminar
    void eliminar(vector<Grifo>& array, int id) {
        for (auto& grifo : array) {
            if (grifo.id == id) {
                grifo.setDatos(0, "", 0);
                cout << "Servicio de grifo eliminado correctamente.\n";
                return;
            }
        }
        cout << "Servicio con ID " << id << " no encontrado.\n";
    }
};
void mostrarMenu() {
    cout << "\n*********** Menu ***********\n";
    cout << "1. Mostrar informacion\n";
    cout << "2. Ingresar datos\n";
    cout << "3. Sumar todos los precios\n";
    cout << "4. Modificar un servicio\n";
    cout << "5. Eliminar un servicio\n";
    cout << "6. Salir\n";
    cout << "****************************\n";
    cout << "Seleccione una opcion: ";
}
int main() {
    int tamanio;
    cout << "Ingrese el tamano de la lista de servicios de grifo: ";
    cin >> tamanio;
    vector<Grifo> array(tamanio);
    Grifo grifoManager;

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                grifoManager.mostrar(array);
                break;
            case 2:
                grifoManager.ingresoDatos(array);
                break;
            case 3:
                cout << "La suma de todos los precios es: " << grifoManager.sumarPrecios(array) << endl;
                break;
            case 4: {
                int id, nuevoId, nuevoPrecio;
                string nuevoServicio;
                cout << "Ingrese el ID del servicio a modificar: ";
                cin >> id;
                cout << "Ingrese el nuevo ID, nuevo servicio y nuevo precio: ";
                cin >> nuevoId >> nuevoServicio >> nuevoPrecio;
                grifoManager.modificar(array, id, nuevoId, nuevoServicio, nuevoPrecio);
                break;
            }
            case 5: {
                int id;
                cout << "Ingrese el ID del servicio a eliminar: ";
                cin >> id;
                grifoManager.eliminar(array, id);
                break;
            }
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "¡Opcion no valida! Intente de nuevo.\n";
                break;
        }
    } while (opcion != 6);

    return 0;
}
