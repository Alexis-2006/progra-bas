#include <iostream>
using namespace std;
int main(){
    int razon;
    razon = 6;
    char a ='A';
    char b ='l';
    char c ='e';
    char d ='x';
    char e ='i';
    char f ='s';
    int y= int(a),v =int(b),w =int(c),x =int(d),r =int(e),s =int(f); 
    y+=razon,v+=razon,w+=razon,x+=razon,r+=razon,s+=razon;
    cout<<"mi nombre encriptaado es: "<<endl;
    cout<<char(y)<<char(v)<<char(w)<<char(x)<<char(r)<<char(s)<<endl;
    cout<<"mi nombre desencriptado es: "<<endl;
    cout<<char(a)<<char(b)<<char(c)<<char(d)<<char(e)<<char(f);

    return 0;

}