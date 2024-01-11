#include <stdio.h>
#include <stdlib.h>

void rectangulo (int N, int M, int C);

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
    rectangulo(n,m,c);
    return 0;
}

void rectangulo (int N, int M, int C){
    int i,x;
    for (i=0;i<M;i++){
        printf("\n");
        for (x=0;x<N;x++){
        printf("%c",C);
    }
    }


}
