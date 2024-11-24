#include <iostream>
using namespace std;

class Rectangulo {
private:
    int ancho;
    int alto;

public:
    Rectangulo(int w, int h) : ancho(w), alto(h) {}

    // Declaramos 
    friend int calcularArea(Rectangulo& r);
};

// método amigo
int calcularArea(Rectangulo& r) {
    return r.ancho * r.alto; 
}

int main() {
    Rectangulo rect(5, 3);
    cout << "Area del rectangulo: " << calcularArea(rect) << endl;
    return 0;
}
