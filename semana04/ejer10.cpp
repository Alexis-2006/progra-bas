/*Contador de vocales: Desarrolla un programa que cuente la cantidad de a, e, i, o, u en 
una oración ingresada por el usuario. */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string oracion;
    int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0;


    cout << "Ingresa una oración: ";
    getline(cin, oracion); 

    for (int i = 0; i < oracion.length(); i++) {
        char c = tolower(oracion[i]); 


        switch (c) {
            case 'a':
                contador_a++;
                break;
            case 'e':
                contador_e++;
                break;
            case 'i':
                contador_i++;
                break;
            case 'o':
                contador_o++;
                break;
            case 'u':
                contador_u++;
                break;
            default:
                break; 
        }
    }


    cout << "Cantidad de 'a': " << contador_a << endl;
    cout << "Cantidad de 'e': " << contador_e << endl;
    cout << "Cantidad de 'i': " << contador_i << endl;
    cout << "Cantidad de 'o': " << contador_o << endl;
    cout << "Cantidad de 'u': " << contador_u << endl;

    return 0;
}
