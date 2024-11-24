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
cout<<"la matriz transpuesta es: "<<endl;
for(j=0;j<c;j++){
  for(i=0;i<f;i++){
    cout<<matriz[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}
