#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    
    cout << "Ingrese el número de filas de la matriz A: ";
    cin >> n;
    cout << "Ingrese el número de columnas de la matriz A (y filas de la matriz B): ";
    cin >> m;
    cout << "Ingrese el número de columnas de la matriz B: ";
    cin >> p;
    
    int A[n][m], B[m][p], C[n][p];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    
    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    
    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "La matriz resultante de la multiplicación es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
