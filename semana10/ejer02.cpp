#include <iostream>
using namespace std;
class Telefono
{
private:
    string marca;
    int pulgadas;
    string color;

public:
    Telefono(string m, int a, string c) : marca(m), pulgadas(a), color(c) {}

    string getMarca() const
    {
        return marca;
    }
    void setMarca(const string &nuevaMarca)
    {
        marca = nuevaMarca;
    }
    int getPulgadas() const
    {
        return pulgadas;
    }
    void setPulgadas(const int &nuevaPulgadas)
    {
        pulgadas = nuevaPulgadas;
    }
    string getColor() const
    {
        return color;
    }
    void setColor(const string &nuevoColor)
    {
        color = nuevoColor;
    }
};

int main()
{
    Telefono telefono("samsung",12,"negro");

cout<<"con el get"<<endl;

    cout << "Marca:" << telefono.getMarca() << endl;
    cout << "Pulgadas: " << telefono.getPulgadas() << " pulgadas" << endl;
    cout << "Color:" << telefono.getColor() << endl;

    telefono.setMarca("aplle");
    telefono.setPulgadas(13);
    telefono.setColor("rojo");
cout<<"con el set"<<endl;
    cout << "Material:" << telefono.getMarca() << endl;
    cout << "pulgadas: " << telefono.getPulgadas() << " pulgadas" << endl;
    cout << "Color:" << telefono.getColor() << endl;
    return 0;
}
