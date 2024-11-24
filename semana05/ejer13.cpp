#include <iostream>
using namespace std;
int main(){
int b,e,pot=1,i;
cout<<"ingrese la base: ";
cin>>b; 
cout<<"ingrese el exponente: ";
cin>>e;
for(i=0;i<e;i++){
pot=pot*b;
}
cout<<"la potencia "<<b<<" elevado a la "<<e<<" es "<<pot;
return 0;
}
