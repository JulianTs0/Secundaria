#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a=1,b=10000,i,p=0;
    float t=0;
    printf("Ingrese de 20 valores de temp\n");
    for(i=1;i<21;i++){
        scanf("%d",&x);
        p = p + x;
        if(x>a){
            a = x;
        } else if(x<a && x<b){
            b = x;
        } else if (a<b){
            b = x;
        }
    }
    t = (float) p / 20;
    printf("El mas grande : %d",a);
    printf("\nEl menor :  %d",b);
    printf("\nEl promedio :  %.2f",t);

    return 0;
}
