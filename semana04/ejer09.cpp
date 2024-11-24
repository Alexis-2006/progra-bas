/*Números Primos en un Rango: Escribe un programa que solicite al usuario dos números enteros 
(inicio y fin) y genere un vector con los números primos en ese rango. Utiliza continue para 
omitir los números no primos.*/
#include <iostream>
#include <vector>
using namespace std;


bool esPrimo(int num) {
    if (num < 2) return false;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; 
    }
    return true;
}

int main() {
    int inicio, fin;
    vector<int> primos;


    cout << "Ingrese el número inicial del rango: ";
    cin >> inicio;
    cout << "Ingrese el número final del rango: ";
    cin >> fin;

    if (inicio > fin) {
        cout << "El valor de inicio debe ser menor o igual que el valor de fin." << endl;
        return 1;
    }

    for (int num = inicio; num <= fin; num++) {
        if (!esPrimo(num)) {
            continue;  
        }
        primos.push_back(num);  
    }

    if (primos.size() > 0) {
        cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
        for (int i = 0; i < primos.size(); i++) {
            cout << primos[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No hay números primos en el rango especificado." << endl;
    }

    return 0;
}
