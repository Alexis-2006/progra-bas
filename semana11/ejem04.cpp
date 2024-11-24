#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcularArea() = 0; // Método puro
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double calcularArea() override {
        return 3.14159 * radio * radio;
    }
};

class Cuadrado : public Figura {
private:
    double lado;

public:
    Cuadrado(double l) : lado(l) {}

    double calcularArea() override {
        return lado * lado;
    }
};

int main() {
    Circulo c(5);
    Cuadrado s(4);

    cout << "Area del circulo: " << c.calcularArea() << endl;
    cout << "Area del cuadrado: " << s.calcularArea() << endl;

    return 0;
}

