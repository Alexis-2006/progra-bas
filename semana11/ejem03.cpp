#include <iostream>
using namespace std;

class Calculadora {
public:
    static int sumar(int a, int b) {
        return a + b;
    }
};

int main() {
    cout << "Suma de 3 y 5: " << Calculadora::sumar(3, 5) << endl;
    return 0;
}