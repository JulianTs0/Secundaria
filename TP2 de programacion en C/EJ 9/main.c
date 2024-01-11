#include <stdio.h>
#include <stdlib.h>

void triangulo (int N, char C, int H);

int main()
{
    int n,h;
    char c;
    printf("Ingresa un caracter\n");
    scanf("%c",&c);
    printf("Ingresa la altura\n");
    scanf("%d",&n);
    printf("Ingresa 1 si quieres que sea hueco y 0 si no\n");
    scanf("%d",&h);
    triangulo (n,c,h);
    return 0;
}

void triangulo (int N, char C, int H){
int i,x;
        if(H == 0){
            for(i=1;i<(N+1);i++){
            printf("\n");
        for(x=1;x<(i+1);x++){
        printf("%c",C);
        }
    } for(i=(N);i>1;i--){
            printf("\n");
        for(x=(i);x>1;x--){
        printf("%c",C);
            }
        }
    } else if (H == 1){
     for(i=1;i<(N+1);i++){
        printf("\n");
        for(x=1;x<(i+1);x++){
                if(x == 1 || x == (i)){
                    printf("%c",C);
                } else if(x != 1 || x != (i)){
                    printf(" ");
                }
    }
} for(i=N-1;i>0;i--){
        printf("\n");
        for(x=i;x>0;x--){
                if(x == 1 || x == (i)){
                    printf("%c",C);
                } else if(x != 1 || x != (i)){
                    printf(" ");
                }
    }
}

    }
}
