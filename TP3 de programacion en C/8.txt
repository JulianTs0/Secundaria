#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temc = 0,h,temp,hrs[24],i,j,x,tp[24];

    for(h=0;h<24;h++){
        hrs[h] = 0;
    }
    for(h=0;h<24;h++){
        printf("Ingrese la temperatura de la hora %d \n",h);
        scanf("%d",&temp);
        hrs[h] = temp;
        tp[h] = h;
    } system("cls");
     for(h=0;h<24;h++){
    printf("A las %d hubo esta temperatura %d \n",h,hrs[h]);
    }
    printf("\n\n\n");
    for(i=0;i < 24;i++){
        for(j=i+1;j < 24;j++){
            if(hrs[j] < hrs[i]){
                x = hrs[j];
                hrs[j] = hrs[i];
                hrs[i] = hrs[j];
                hrs[i] = x;
                x = tp[j];
                tp[j] = tp[i];
                tp[i] = tp[j];
                tp[i] = x;
                }
            }
        }

    for(h=0;h<24;h++){
    printf("A las %d hubo esta temperatura %d \n",tp[h],hrs[h]);
    }

    return 0;
}
