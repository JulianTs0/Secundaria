#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,p;
    printf("ingresar 3 numeros\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(a<b && a<c){
        printf("a es el menor\n");
    } else if(b<a && b<c){
        printf("b es el menor\n");
    } else if(c<b && c<a){
        printf("c es el menor\n");
    } else {
        printf("Son todos iguales");
    }
    p= (a+b+c) / 3;
    printf("El promedio es: %.2f",p);
    return 0;
}
