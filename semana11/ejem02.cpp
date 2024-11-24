#include <iostream>
using namespace std;

class B; // Declaración adelantada

class A {
private:
    int valorA;
public:
    A(int x) : valorA(x) {}

    // Clase amiga
    friend class B;
};

class B {
public:
    void mostrarValorA(const A& a) {
        cout << "Valor de A desde B: " << a.valorA << endl;
    }
};

int main() {
    A a(42);
    B b;
    b.mostrarValorA(a);
    return 0;
}