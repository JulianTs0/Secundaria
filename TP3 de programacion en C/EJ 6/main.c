#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temc = 0,h,temp,hrs[23];

    for(h=0;h<24;h++){
        hrs[h] = 0;
    }
    for(h=0;h<24;h++){
        printf("Ingrese la temperatura de la hora %d \n",h);
        scanf("%d",&temp);
        if(temp > 50){
            temc += 1;
            hrs[h] += 1;
        }
    }
    printf("En el dia se supero los 50 grados : %d veces \n",temc);
    printf("Y se supero esta temperatura a estas horas :\n");
    for(h=0;h<24;h++){
      if(hrs[h] == 1){
        printf("%d \n",h);
      }
    }
    return 0;
}
