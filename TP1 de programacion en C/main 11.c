#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=0,d1=0,d2=0,d3=0,x=0,t=0,m=0,r=0,i=0;
    float re=0;
    printf("Ingresar la cantidad de bandas de su ressitencia\n");
    scanf("%d",&b);
        if(b == 4){
        printf("Ingrese el digito 1\n");
        scanf("%d",&d1);
        printf("Ingrese el digito 2\n");
        scanf("%d",&d2);
        printf("Ingrese el multiplicador\n");
        scanf("%d",&x);
        printf("Por ultimo ingrese el valor medido\n");
        scanf("%d",&m);
        r = (d2 + (d1 * 10));
        r = r * x;
        re = (float) r / m;
        re = (float) re * 100;
        re = (float) re - 100;
        if(re > 0){
            printf("\nSu resistencia tiene una tolerancia de +-%.0f",re);
        } else if (0 > re){
            printf("\nSu resistencia tiene una tolerancia de +%.0f",re);
        }


    } else if(b == 5){
        printf("Ingrese el digito 1\n");
        scanf("%d",&d1);
        printf("Ingrese el digito 2\n");
        scanf("%d",&d2);
        printf("Ingrese el digito 3\n");
        scanf("%d",&d3);
        printf("Ingrese el multiplicador\n");
        scanf("%d",&x);
        printf("Por ultimo ingrese el valor medido\n");
        scanf("%d",&m);
        r = (d2 * 10) + (d1 * 100);
        r = r + d3;
        r = r * x;
        re = (float) r / m;
        re = (float) re * 100;
        re = (float) re - 100;
        if(re > 0){
            printf("\nSu resistencia tiene una tolerancia de +-%.0f",re);
        } else if (0 > re){
            printf("\nSu resistencia tiene una tolerancia de +%.0f",re);
        }

    }  else if(b == 6){
        printf("Ingrese el digito 1\n");
        scanf("%d",&d1);
        printf("Ingrese el digito 2\n");
        scanf("%d",&d2);
        printf("Ingrese el digito 3\n");
        scanf("%d",&d2);
        printf("Ingrese el multiplicador\n");
        scanf("%d",&x);
        printf("Ingrese el coeficiente de tempeatura\n");
        scanf("%d",&t);
        printf("Por ultimo ingrese el valor medido\n");
        scanf("%d",&m);
        r = d3 + (d2 * 10) + (d1 * 100);
        r = r * x;
        re = (float) r / m;
        re = (float) re * 100;
        re = (float) re - 100;
        if(re > 0){
            printf("\nSu resistencia tiene una tolerancia de +-%.0f",re);
        } else if (0 > re){
            printf("\nSu resistencia tiene una tolerancia de +%.0f",re);
        }

    } else {
        printf("\nLas bandas ingresadas no son correctas vuelva a ingresar las bandas");
    }




    return 0;
}
