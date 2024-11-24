#include <iostream>
using namespace std;
void rotarArray(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, k;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;
    int arr[n];
    cout << "Ingrese los elementos del array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Ingrese el número de posiciones a rotar: ";
    cin >> k;
    rotarArray(arr, n, k);
    cout << "Array rotado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
