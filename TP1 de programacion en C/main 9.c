#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Ingrese la longitud en centimentros de un triangulo\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && b==c){
        printf("su triangulo es equilatero");
    } else if(a!=b && b!=c && c!=a){
        printf("su triangulo es escaleno");
    } else {
        printf("su triangulo es isoceles");
    }
    return 0;
}
