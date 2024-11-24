#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,l,p,d,D;
    printf("escriba la diagonal mayor del rombo: ");
    scanf ("%f",&D);
    printf("escriba la diagonal menor del rombo: ");
    scanf("%f" ,&d);
     a = (D*d)/2;
     l =sqrt(pow((D/2),2)+pow((d/2),2));
     p = 4*l;
    printf("el rombo tiene un área de %.2f\n", a);
     printf("el rombo tiene un lado de %.2f\n",l);
    printf("el rombo tiene un perimetro de %.2f\n", p);
    return 0;
}