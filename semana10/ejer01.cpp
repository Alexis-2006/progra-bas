#include <iostream>
using namespace std;

class Puerta{
private:
string material;
int altura;
int ancho;
string color;
public:
Puerta(string  m,int h,int a,string c):
material(m),altura(h),ancho(a),color(c){}

string getMaterial()const{
    return material;
}
void setMaterial(const string&nuevoMaterial){
    material=nuevoMaterial;
}
int getAltura()const{
    return altura;
}
void setAltura(const int&nuevaAltura){
    altura=nuevaAltura;
}
int getAncho()const{
    return ancho;
}
void setAncho(const int&nuevoAncho){
    ancho=nuevoAncho;
}
string getColor()const{
    return color;
}
void setColor(const string&nuevoColor){
    color=nuevoColor;
}
};

int main(){
    Puerta puerta("madera",200,80,"blanco");
cout<<"con el get"<<endl;
cout<<"Material:"<<puerta.getMaterial()<<endl;
cout<<"Altura:"<<puerta.getAltura()<<"cm"<<endl;
cout<<"Ancho:"<<puerta.getAncho()<<"cm"<<endl;
cout<<"Color:"<<puerta.getColor()<<endl;

puerta.setMaterial("Metal");
puerta.setAltura(300);
puerta.setAncho(70);
puerta.setColor("Azul");

cout<<"con el set"<<endl;
cout<<"Material:"<<puerta.getMaterial()<<endl;
cout<<"Altura:"<<puerta.getAltura()<<"cm"<<endl;
cout<<"Ancho:"<<puerta.getAncho()<<"cm"<<endl;
cout<<"Color:"<<puerta.getColor()<<endl;
return 0;
}
