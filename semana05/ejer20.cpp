#include<iostream>
using namespace std;
int main(){
int a;
cout<<"ingrese el numero de tres cifraz : ";
cin>>a;
if(a<100 or a>999){
    cout<<" !ingrese un numero de tres cifraz! "<<endl;
    return 0;
}
int centenas=0,decena=0,unidad=0;
centenas=a/100;
decena=(a/10)%10;
unidad=a%10;
if(centenas==decena and decena==unidad){
    cout<<"los digitos del numero son iguales";
}
else if(centenas==decena or decena==unidad or unidad==centenas){
    cout<<"solo dos digitos son iguales ";
}
else if(centenas!=decena and decena!=unidad){
    cout<<"los digitos son diferentes";
}return 0;
}
