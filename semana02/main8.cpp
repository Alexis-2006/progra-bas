#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float l1,l2,l3,a,Sp;
    printf("escriba el lado 1 del triangulo: ");
    scanf ("%f",&l1);
    printf("escriba el lado 2 del triangulo: ");
    scanf("%f" ,&l2);
    printf("escriba el lado 3 del triangulo: ");
    scanf("%f" ,&l3);
     Sp = (l1+l2+l3)/2;
     a =sqrt(Sp * (Sp - l1) * (Sp - l2) * (Sp - l3));
    printf("El semiperimetro del triangulo es %.1f\n", Sp);
    printf("El area del triangulo es %.9f\n", a);
    return 0;
}
