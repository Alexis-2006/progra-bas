/*Cifrado Cesar: Implementa un programa que realice un cifrado César. Solicita al usuario 
ingresar una cadena y un número (la clave del cifrado). Luego, cifra la cadena desplazando 
cada letra en la cadena por la cantidad especificada en la clave.*/
#include <iostream>
#include <string>
using namespace std;

string cifrarCesar(string texto, int clave) {
    string resultado = "";


    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

   
        if (isalpha(c)) {
        
            char limite = isupper(c) ? 'A' : 'a';

            c = (c - limite + clave) % 26 + limite;
        }

        resultado += c;
    }

    return resultado;
}

int main() {
    string texto;
    int clave;

    cout << "Ingrese una cadena para cifrar: ";
    getline(cin, texto);

    cout << "Ingrese la clave de cifrado (número de desplazamientos): ";
    cin >> clave;

    clave = clave % 26;

    string textoCifrado = cifrarCesar(texto, clave);

    cout << "Cadena cifrada: " << textoCifrado << endl;

    return 0;
}
