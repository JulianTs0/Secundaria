#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x[20],x2[20];

    for(i=0;i<20;i++){
        printf("Ingrese un valor entre 0 y 100\n");
        scanf("%d",&x[i]);
        if(x[i]>100){
            printf("error\n");
            i--;
        } else if (x[i]>80){
            x2[i] = i;
        }
    }

    for(i=0;i<20;i++){
       if (x[i]>80){
        printf("Numero:%d Posicion:%d \n",x[i],x2[i]);
       }
    }
    return 0;
}
