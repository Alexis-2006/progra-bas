#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingresa una letra cualquiera: ";
    cin >> letra;
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vocal" << endl;
            break;
        default:
            cout << "Consonante" << endl;
            break;
    }
    return 0;
}
