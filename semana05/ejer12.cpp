#include <iostream>
using namespace std;
int main(){
int n,i;
cout<<"ingrese el numero del que quiera hallar los multiplos de (1-100): ";cin>>n;
cout<<"los multiplos de "<<n<<" son:"<<endl;
for(i=1;i*n<=100;i++){
    cout<<n*i<<" ";
}
return 0;}
