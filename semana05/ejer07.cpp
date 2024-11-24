#include <iostream>
using namespace std;
void moverCerosAlFinal(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) {
        arr[j++] = 0;
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
    
    moverCerosAlFinal(arr, n);

    cout << "Array con ceros movidos al final: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
