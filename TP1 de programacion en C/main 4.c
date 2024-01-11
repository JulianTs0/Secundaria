#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("ingrese tres valores\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

  if (a>b&&b>c&&a>c){
        printf("a es el mayor b es el del medio y c es el menor");
        } else if (a<b&&a>c&&b>c){
            printf("b es el mayor a es el del medio y c es el menor");
        } else if (c>b&&b>a&&c>a){
            printf("c es el mayor b es el del medio y a es el menor");
        } else if (a>b&&b<c&&a>c){
            printf("a es el mayor c es el del medio y b es el menor");
        } else if (a<b&&c>a&&a>c){
            printf("b es el mayor c es el del medio y a es el menor");
        }



    return 0;
}
