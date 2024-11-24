#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int countPositivos = 0, countNegativos = 0, countCeros = 0; 
    int numero;
    int i = 0;

    do {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numero;

       if (numero > 0) {
            countPositivos++; 
        } else if (numero < 0) {
            countNegativos++;
        } else {
            countCeros++;
        }
        i++;
    } while (i < n); 

    cout << "Positivos: " << countPositivos << endl;
    cout << "Negativos: " << countNegativos << endl;
    cout << "Ceros: " << countCeros << endl;

    return 0;
}
