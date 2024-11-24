#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,h,b,l1,l2;
    printf("escriba el lado 1 del triangulo: ");
    scanf ("%f",&l1);
    printf("escriba el lado 2 del triangulo: ");
    scanf("%f" ,&l2);
    printf("escriba la base del triangulo: ");
    scanf("%f" ,&b);
    printf("escriba la altura del triangulo: ");
    scanf("%f" ,&h);
     a =b*h/2;
     p =l1+l2+b;
    printf("el triangulo tiene un área de %.2f\n", a);
    printf("el triangulo tiene un perimetro de%.2f\n", p);
    return 0;
}