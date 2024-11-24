#include<iostream>
using namespace std;
int main(){

unsigned int año;

cout<<"ingrese año: ";
cin>>año;

if((año % 4 == 0 and año%100 != 0) or (año%400==0)){
    cout<<"el año  "<<año<<"  es bisiesto"<<endl;
}
else cout<<"el año no es bisiesto";
return 0;
}
