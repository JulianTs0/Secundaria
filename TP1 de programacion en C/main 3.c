#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Ingrese dos numeros\n");
    scanf("%f",&a);
    scanf("%f",&b);
    if(a>b){
        printf("A es mayor que B\n");
    } else if(b>a){
        printf("B es mayor que A\n");
    }
    return 0;
}
