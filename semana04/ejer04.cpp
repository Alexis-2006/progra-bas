/*Sucesión de Collatz: Escribe un programa que tome un número entero positivo n como entrada y genere 
la secuencia de Collatz para ese número. La secuencia de Collatz se obtiene siguiendo estas reglas:
Si n es par, divídelo por 2.
Si n es impar, multiplícalo por 3 y suma 1.
Repite el proceso hasta llegar al número 1.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 1; 
    }

    cout << "Secuencia de Collatz: " << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  // Si es par, se divide entre 2
        } else {
            n = 3 * n + 1;  // Si es impar, se multiplica por 3 y se suma 1
        }
        cout << n << " ";  // Imprimir el valor actual de n
    }

    cout << endl;
    return 0;
}
