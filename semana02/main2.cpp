#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,d,b,h;
    printf("escreba la base del rectangulo: ");
    scanf ("%f",&b);
    printf("escriba la altura del rectangulo: ");
    scanf("%f" ,&h);
     a = b*h;
     p = 2*(b+h);
     d =sqrt(pow(b,2)+pow(h,2));
    printf("el rectangulo tiene un área de %.2f\n", a);
    printf("el rectangulo tiene un perimetro de %.2f\n", p);
    printf("La diagonal del rectangulo es de %.2f\n",d);
    return 0;
}