/*Mayor Elemento en un Vector: Crea un programa que encuentre el mayor elemento en un vector de
números enteros. Utiliza un bucle for y break para salir del bucle tan pronto como encuentres 
el mayor elemento */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int cantidad, num;

    cout << "¿Cuántos números deseas ingresar?: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num);
    }

    int mayor = numeros[0];

    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "El mayor número en el vector es: " << mayor << endl;

    return 0;
}
