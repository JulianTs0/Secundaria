#include <stdio.h>
#include <stdlib.h>

void rectanguloHueco (int N, int M, char C);

int main()
{
    int n,m;
    char c;
    printf("Ingrese un caracter");
    scanf("%c",&c);
    printf("Ingrese la cantidad de columnas");
    scanf("%d",&n);
    printf("Ingrese la cantidad de filas");
    scanf("%d",&m);
    rectanguloHueco(n,m,c);
    return 0;
}

void rectanguloHueco (int N, int M, char C){
    int i,x;
    for (i=1;i<=M;i++){
        printf("\n");
        for (x=1;x<=N;x++){
                if(x == 1 || x == (N)){
                   printf("%c",C);
                } if(i == 1 || i == (M)){
                 printf("%c",C);
                } else if (x != 1 || x != (N) ||  i != 1 || x != (M)){
                printf(" ");
                }

        }
    }


}
