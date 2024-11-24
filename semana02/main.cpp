#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,d,l;
    printf("escriba el lado del cuadrado: ");
    scanf ("%f",&l);
     a = pow(l, 2);
     p = 4*l;
     d =l*sqrt(2);
    printf(" el cuadrado tiene un área de %.2f\n", a);
    printf(" el cuadrado tiene un perimetro de  %.2f\n", p);
    printf(" la diagonal del cuadrado es %.4f\n",d);
    return 0;
} 