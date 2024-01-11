#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calif[10],i=0,x,x1;
    float p;
    while(i!=-1){
        printf("Ingrese una nota de un alumno");
        scanf("%d",&x1);
        calif[i] = x1;
        p += calif[i];
        i++;
        if(i == 10){
            p /= 10;
            printf("El promedio es %.2f \n",p);
            printf("Para continuar escriba 1 para salir escriba 0");
            scanf("%d",&x);
            if(x == 0){
                i = -1;
                break;
            } else if (x == 1){
                p = 0;
                i = 0;
                system("cls");
                }
        }
    }


    return 0;
}
