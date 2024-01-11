#include <stdio.h>
#include <stdlib.h>

void naturales(int N, char C);

int main()
{
    int n;
    char c;
    printf("Ingresa un caracter");
    scanf("%c",&c);
    printf("Ingresa un numero narutal");
    scanf("%d",&n);
    system("cls");
    naturales(n,c);
    return 0;
}
void naturales(int N, char C){
    int i,x;
    for(i=1;i<(N+1);i++){

        printf("%d",i);

        for(x=1;x<(i+1);x++){
            printf("%c",C);
        }
        printf("\n");
    }
    return;
}
