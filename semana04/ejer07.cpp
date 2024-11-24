/*Eliminación de Duplicados: Crea un programa que elimine los elementos duplicados de un vector. 
Utiliza un bucle for, break y continue según sea necesario.*/
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

    for (int i = 0; i < numeros.size(); i++) {
        for (int j = i + 1; j < numeros.size(); j++) {
            if (numeros[i] == numeros[j]) {
              
                numeros.erase(numeros.begin() + j);
                j--;  
            }
        }
    }

    cout << "Vector sin duplicados: ";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
