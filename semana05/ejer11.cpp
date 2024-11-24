#include <iostream>
using namespace std;
int main(){
int f,i,j;
cout<<"ingrese el numero de filas del triangulo: ";
cin>>f;
 for (int i = 1; i <= f; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}

