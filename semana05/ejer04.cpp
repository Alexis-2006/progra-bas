#include <iostream>
using namespace std;
int main(){
int f,c,i,j;
cout<<"ingrese el num de filas: ";
cin>>f;
cout<<"ingrese el num de columnas: ";
cin>>c;
int matriz [f][c];
for(i=0;i<f;i++){
  for(j=0;j<c;j++){
    cout<<" el valor de ["<<i<<"] ["<<j<<"] :";
    cin>>matriz[i][j];
  }
}
cout<<"la matriz es: "<<endl;
for(i=0;i<f;i++){
  for(j=0;j<c;j++){
    cout<<matriz[i][j]<<" ";
  }
  cout<<endl;
}
int max=matriz[0][0],min=matriz[0][0];
cout<<"(calculando el maximo y minimo valor de la matriz)....."<<endl;
for(j=0;j<c;j++){
  for(i=0;i<f;i++){
if(matriz[i][j]>max) max=matriz[i][j];
if(matriz[i][j]<min) min=matriz[i][j];
  }
}
cout<<"el maximo elemento de la matriz es: "<<max<<endl;
cout<<"el minimo elemento de la matriz es: "<<min<<endl;
return 0;
}
