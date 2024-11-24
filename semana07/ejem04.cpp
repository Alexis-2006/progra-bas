#include <iostream>
using namespace std;

// Ejemplo 1
void imprimirHola() {
    cout << "¡Hola Mundo!" << endl;
}

// Ejemplo 2
void mostrarNumero(int num) {
    cout << "Número: " << num << endl;
}

// Ejemplo 3
void cambiarSigno(int &num) {
    num = -num;
}

// Ejemplo 4
void despedirse() {
    cout << "Adiós!" << endl;
}

// Ejemplo 5
void contarHasta(int limite) {
    for (int i = 1; i <= limite; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    imprimirHola();
    mostrarNumero(7);
    contarHasta(5);
    return 0;
}
