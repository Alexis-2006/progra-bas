#include <iostream>
using namespace std;
int main(){
int x;
cout<<"ingrese numero: ";
cin>>x;
int signo=1;
if(x<0){
    signo=-1;
    x=-(x);
}
int inverso=0,ultidig=0;
while(x>0){
ultidig=x%10;

inverso=inverso * 10 + ultidig;
x=x/10;
}
inverso*=signo;
cout<<"El numero invertido es: " << inverso << endl;
return 0;
}
