#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float l1,l2,l3,r,a,Sp;
    printf("escriba el lado 1 del triangulo circunscrito: ");
    scanf ("%f",&l1);
    printf("escriba  el lado 2 del triangulo circunscrito: ");
    scanf("%f" ,&l2);
    printf("escriba  el lado 3 del triangulo circunscrito: ");
    scanf("%f" ,&l3);
    printf("escriba  el radio del triangulo circunscrito: ");
    scanf("%f" ,&r);
     Sp = (l1+l2+l3)/2;
     a =r*Sp;
    printf("El semiperimetro del triangulo circunscrito es %.2f\n", Sp);
    printf("El area del triangulo circunscrito es %.2f\n", a);
    return 0;
}