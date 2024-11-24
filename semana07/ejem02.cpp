#include <iostream>
using namespace std;

// Ejemplo 1
void duplicar(int &num) {
    num = num * 2;
}

// Ejemplo 2
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Ejemplo 3
void incrementar(int &n) {
    n++;
}

// Ejemplo 4
void asignarCero(int &num) {
    num = 0;
}

// Ejemplo 5
void cambiarValor(int &valor, int nuevoValor) {
    valor = nuevoValor;
}

int main() {
    int valor = 5;
    duplicar(valor);  // Ahora sí cambia el valor original
    cout << "Valor duplicado: " << valor << endl;
    return 0;
}
