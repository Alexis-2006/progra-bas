/*Matriz Transpuesta: Crea un programa que solicite al usuario ingresar los elementos
 de una matriz cuadrada. Luego, calcula la matriz transpuesta e imprímela en la pantalla.*/
 #include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    int matriz[n][n], transpuesta[n][n];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz original:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriz transpuesta:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
