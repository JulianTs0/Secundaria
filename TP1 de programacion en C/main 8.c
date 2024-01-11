#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,t,c,p,T,C,R,P;

    printf("ingrese los valores que desea calcular\n");
    scanf("%f",&t);
    scanf("%f",&c);
    scanf("%f",&r);

T = c * r;
C = t / r;
R = t / c;
P = t * c;

printf("el valor de la tension es %.2f\n",T);
printf("el valor de la corriente %.2f\n",C);
printf("el valor de la resistencia es %.2f\n",R);
printf("el valor de la potencia es %.2f\n",P);

    return 0;
}
