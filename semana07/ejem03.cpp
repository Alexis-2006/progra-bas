#include <iostream>
using namespace std;

// Ejemplo 1
int suma(int a, int b) {
    return a + b;
}

// Ejemplo 2
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Ejemplo 3
float dividir(float a, float b) {
    return a / b;
}

// Ejemplo 4
bool esPar(int num) {
    return num % 2 == 0;
}

// Ejemplo 5
int maximo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int resultado = suma(3, 7);
    cout << "Suma: " << resultado << endl;
    return 0;
}
