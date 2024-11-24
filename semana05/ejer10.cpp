#include <iostream>
using namespace std;
int main(){
int n;
cout<<"ingrese el enesimo termino el rango va del 1 hasta el numero q ingres: ";
cin>>n;
int i=1,sumaPar=0,sumaImpar=0;
while(i<=n){
if(i%2==0){
    sumaPar+=i;
}
else{
    sumaImpar+=i;
}
i++;
}
cout<<"la suma de pares de 1 hasta "<<n<<" es:"<<sumaPar<<endl;
cout<<"la suma de impares de 1 hasta "<<n<<" es:"<<sumaImpar<<endl;
cout << "La suma total de los numeros pares e impares entre 1 y " << n << " es: " << sumaPar+sumaImpar << endl;
return 0;
}
