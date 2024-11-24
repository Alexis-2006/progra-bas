/*Manejo de Arreglos: Escribe un programa que solicite al usuario 
ingresar 10 númerosenteros. Luego, encuentra el promedio de los números 
ingresados y muestra cuántos números son mayores que el promedio.*/
#include <iostream>
using namespace std;

int main() {
    int numeros[10];  
    int suma = 0;     
    float promedio;   
    int mayoresQuePromedio = 0;  

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i]; 
    }

    promedio = suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    // Mostrar el promedio y cuántos números son mayores que el promedio
    cout << "El promedio de los números ingresados es: " << promedio << endl;
    cout << "Hay " << mayoresQuePromedio << " números mayores que el promedio." << endl;

    return 0;
}
