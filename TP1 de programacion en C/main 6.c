#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0,x1=0,r,f=0,fx=0,fy;
    int i;
    printf("Ingrese la cantidad de resistencias");
    scanf("%f",&r);
    for(i=0;i<r;i++){
        printf("Ingrese un valor de resistencia");
        if(i % 2 == 0){
        scanf("%f",&x);
        } else if(i % 2 != 0){
         scanf("%f",&x1);
        }

    }
    printf("El resultado es : %f",f);
    return 0;
}
