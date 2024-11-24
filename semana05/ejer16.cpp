#include <iostream>
using namespace std;
int main(){
    int opcion;
do{
    cout<<"ingrese una opcio: \n (1) HOLA \n (2) ADIOS \n (3) salir\n";
    cin>>opcion;
    switch (opcion){
    case 1:
      cout<<"Hola"<<endl;
        break;
    case 2:
    cout<<"Adios"<<endl;
    break;

    case 3:
cout<<"Saliendo del menu de opciones"<<endl;
    break;

default:
    cout<<"eliga una de las opciones ";
        break;
    }
}while(opcion!=3);    
    return 0;
}
