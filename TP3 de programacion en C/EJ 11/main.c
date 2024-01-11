#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [10],i,j,x1,x;
    for(i=0;i<10;i++){
        printf("Ingrese hasta 10 numeros enteros");
        scanf("%d",&num[i]);
    }
    printf("Ingrese 1 para que se ordene de mayor a menor y 0 para que se ordene de menor a mayor");
    scanf("%d",&x1);
    if(x1 == 1 ){
       for(i=0;i < 10;i++){
        for(j=i+1;j < 10;j++){
            if(num[i] < num[j]){
                x = num[i];
                num[i] = num[j];
                num[j] = num[i];
                num[j] = x;
                }
            }
        }
      for(i=0;i<10;i++){
        printf("%d \n",num[i]);
      }
    } else if(x1 == 0 ){
       for(i=0;i < 10;i++){
        for(j=i+1;j < 10;j++){
            if(num[j] < num[i]){
                x = num[j];
                num[j] = num[i];
                num[i] = num[j];
                num[i] = x;
                }
            }
        }
         for(i=0;i<10;i++){
        printf("%d \n",num[i]);
      }
    } else {
    printf("Vuelva a iniciar el programa");

    }

    return 0;
}
