#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,h,b,B;
    printf("escriba la Base mayor del rombo: ");
    scanf ("%f",&B);
    printf("escriba la Base menor del rombo: ");
    scanf("%f" ,&b);
    printf("escriba la altura del trapecio: ");
    scanf("%f" ,&h);
     a = (B+b)*h/2;
    printf("el trapecion tiene un área de %.2f\n", a);
    return 0;
}