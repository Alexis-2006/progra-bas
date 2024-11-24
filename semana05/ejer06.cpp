#include <iostream>
using namespace std;
void eliminarDuplicados(int arr[], int n, int& newSize) {
    int temp[n];
    newSize = 0;
    for (int i = 0; i < n; i++) {
        bool duplicado = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == temp[j]) {
                duplicado = true;
                break;
            }
        }
        if (!duplicado) {
            temp[newSize] = arr[i];
            newSize++;
        }
    }
    for (int i = 0; i < newSize; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;
    int arr[n];
    cout << "Ingrese los elementos del array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newSize;
    eliminarDuplicados(arr, n, newSize);
    cout << "Array comprimido sin duplicados: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
