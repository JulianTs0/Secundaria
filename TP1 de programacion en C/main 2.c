#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    printf("ingrese 3 valores de resistencias\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    d=1/((1/a)+(1/b)+(1/c));
    printf("el resultado del paralelo es : %.2f",d );
    return 0;
}
