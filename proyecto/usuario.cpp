#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

struct Especie {
    string nombre;
    int poblacion;
    int tasaReproduccion;
    int tasaMortalidad;
    vector<int> historialPoblacion; // Este vector registra el historial de poblacion de cada especie 
};

void mostrarMenu();
void mostrarEstado(const Especie &otorongo, const Especie &lobo, const Especie &venado);
void simularCiclo(Especie &otorongo, Especie &lobo, Especie &venado);
void reproducir(Especie &especie);
void cazar(Especie &depredador, Especie &presa);
void cazarFurtiva(Especie &otorongo, Especie &lobo);

string usuarioRegistrado = "";  // Para guardar el nombre de usuario
string contrasenaRegistrada = "";  // Para guardar la contrasena

void registrarUsuario() {
    if (!usuarioRegistrado.empty()) {
        cout << "Ya existe un usuario registrado. No es posible registrar otro.\n";
        return;
    }

    cout << "Ingrese un nombre de usuario: ";
    cin >> usuarioRegistrado;

    cout << "Ingrese una contrasena: ";
    cin >> contrasenaRegistrada;

    cout << "Usuario registrado con exito.\n";
}

bool iniciarSesion() {
    if (usuarioRegistrado.empty()) {
        cout << "No hay usuarios registrados. Por favor, registre un usuario primero.\n";
        return false;
    }

    string usuario, contrasena;
    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;

    cout << "Ingrese su contrasena: ";
    cin >> contrasena;

    if (usuario == usuarioRegistrado && contrasena == contrasenaRegistrada) {
        cout << "Inicio de sesion exitoso. ¡Bienvenido!\n";
        return true;
    } else {
        cout << "Usuario o contrasena incorrectos.\n";
        return false;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Inicializa el generador de numeros aleatorios

    Especie otorongo = {"Otorongo", 20, 2, 1};
    Especie lobo = {"Lobo", 30, 3, 1};
    Especie venado = {"Venado", 50, 5, 2};

    // Registrar la poblacion inicial en el historial
    otorongo.historialPoblacion.push_back(otorongo.poblacion);
    lobo.historialPoblacion.push_back(lobo.poblacion);
    venado.historialPoblacion.push_back(venado.poblacion);

    int opcion;

    // Menu para registro e inicio de sesion
    do {
        cout << "\nMenu de usuario:\n";
        cout << "1. Registrarse\n";
        cout << "2. Iniciar sesion\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarUsuario();
                break;
            case 2:
                if (iniciarSesion()) {
                    goto simulacion;
                }
                break;
            case 3:
                cout << "Saliendo del programa.\n";
                return 0;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 3);

    return 0;

simulacion:
    // Menu de simulacion del ecosistema
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarEstado(otorongo, lobo, venado);
                break;
            case 2:
                simularCiclo(otorongo, lobo, venado);
                break;
            case 3:
                cazarFurtiva(otorongo, lobo);
                break;
            case 4:
                cout << "Saliendo del programa de simulacion..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}

void mostrarMenu() {
    cout << "\n--- Simulacion de Ecosistema ---\n";
    cout << "1. Mostrar estado actual\n";
    cout << "2. Simular un ciclo\n";
    cout << "3. Simular caza furtiva de depredadores\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
}

void mostrarEstado(const Especie &otorongo, const Especie &lobo, const Especie &venado) {
    cout << "\nEstado actual del ecosistema:\n";
    cout << otorongo.nombre << " - Poblacion: " << otorongo.poblacion << endl;
    cout << lobo.nombre << " - Poblacion: " << lobo.poblacion << endl;
    cout << venado.nombre << " - Poblacion: " << venado.poblacion << endl;

    // Muestra el historial de poblacion
    cout << "\nHistorial de poblacion del Otorongo: ";
    for (int p : otorongo.historialPoblacion) cout << p << ", ";
    cout << "\nHistorial de poblacion del Lobo: ";
    for (int p : lobo.historialPoblacion) cout << p << ", ";
    cout << "\nHistorial de poblacion del Venado: ";
    for (int p : venado.historialPoblacion) cout << p << ", ";
    cout << endl;
}

void simularCiclo(Especie &otorongo, Especie &lobo, Especie &venado) {
    reproducir(otorongo);
    reproducir(lobo);
    reproducir(venado);
    cazar(otorongo, venado);
    cazar(lobo, venado);

    if (otorongo.poblacion < 0) otorongo.poblacion = 0;
    if (lobo.poblacion < 0) lobo.poblacion = 0;
    if (venado.poblacion < 0) venado.poblacion = 0;

    // Registrar la nueva poblacion en el historial
    otorongo.historialPoblacion.push_back(otorongo.poblacion);
    lobo.historialPoblacion.push_back(lobo.poblacion);
    venado.historialPoblacion.push_back(venado.poblacion);

    cout << "\nSe ha completado un ciclo de simulacion.\n";
}

void reproducir(Especie &especie) {
    int nuevosIndividuos = (rand() % (especie.tasaReproduccion + 1));
    especie.poblacion += nuevosIndividuos;
    cout << especie.nombre << " se ha reproducido. Nuevos individuos: " << nuevosIndividuos << endl;
}

void cazar(Especie &depredador, Especie &presa) {
    int presasCazadas = (rand() % (depredador.tasaMortalidad + 1));
    presa.poblacion -= presasCazadas;
    depredador.poblacion += presasCazadas / 2; // Cada presa mejora la supervivencia del depredador
    cout << depredador.nombre << " ha cazado " << presasCazadas << " " << presa.nombre << "." << endl;
}

void cazarFurtiva(Especie &otorongo, Especie &lobo) {
    int atacante = rand() % 2; // 0 para Otorongo, 1 para Lobo
    int resultado = rand() % 2; // 0 para cazador gana, 1 para animal gana

    if (atacante == 0) {
        cout << "Caza furtiva con Otorongo...\n";
        if (resultado == 0) {
            otorongo.poblacion--;
            cout << "El cazador ha matado a un Otorongo.\n";
        } else {
            cout << "¡El Otorongo ha atacado al cazador y escapado!\n";
        }
    } else {
        cout << "Caza furtiva con Lobo...\n";
        if (resultado == 0) {
            lobo.poblacion--;
            cout << "El cazador ha matado a un Lobo.\n";
        } else {
            cout << "¡El Lobo ha atacado al cazador y escapado!\n";
        }
    }
}
