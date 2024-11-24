#include<iostream>
using namespace std;
int main(){
int nota;
cout<<"ingrese su nota del (0 - 100) en ese rango:  ";
cin>>nota;

if(nota>=90 and nota<=100){
    cout<<"su nota en letras es: A "<<endl;
}
else if (nota>=80 and nota<=89){
cout<<"su nota en letras es: B";
}
else if (nota>=70  and nota<=79){
cout<<"su nota en letras es: C";
}
else if (nota>=60  and nota<=69){
cout<<"su nota en letras es: D";
}
else cout<<"tu nota en letras es: F";
return 0;
}
