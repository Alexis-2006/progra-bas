#include <iostream>
using namespace std;
int main(){
    int precio;
    char b;
    cout<<"ingrese precio: ";
    cin>>precio;
    cout<<"ingrese una opcio en mayuscula: \n (A) descuento de 10% \n (B) descuento de 20% \n (C) descuento de 30% \n";
    cin>>b;
    switch (b)
    {
    case 'A':
      cout<<"el precion con el descuento de 10% es: "<<precio-(precio*0.10)<<endl;
        break;
    case 'B':
    cout<<"el precion con el descuento de 20% es: "<<precio-(precio*0.20)<<endl;
    break;

    case 'C':
cout<<"el precion con el descuento de 30% es: "<<precio-(precio*0.30)<<endl;
    break;

    default:
    cout<<"eliga una de las opciones ";
        break;
    }
    return 0;
}
