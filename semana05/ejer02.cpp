#include <iostream>
using namespace std;
int main(){
int n;
cout<<"ingrese el tamaño de la matriz(nxn): ";
cin>>n;
int matriz[n][n];
cout<<"ingrese los numeros de la matriz: "<<endl;
int i,j;
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    cout<<" el valor de ["<<i<<"] ["<<j<<"] :";
    cin>>matriz[i][j];
  }
}
for(i=0;i<n;i++){
 for ( j=0; j<n; j++){
    cout<<matriz[i][j]<<" ";
 }
 cout<<endl;
}
int sumdiagoprincipal=0,sumdiagosecu=0;
for(i=0;i<n;i++){
    sumdiagoprincipal+=matriz[i][i];
    sumdiagosecu+=matriz[i][n-1-i];
}
cout << "Suma de la diagonal principal: " << sumdiagoprincipal << endl;
cout << "Suma de la diagonal secundaria: " << sumdiagosecu << endl;
return 0;
}
