#include <stdio.h>
#include <stdlib.h>
int kdivisor(int N, int K);

int main()
{
    int n,k,d;
    printf("Ingrese un numero para averiguar un divisior ");
    scanf("%d",&n);
    printf("Ingrese el divisor que quiere averiguar ");
    scanf("%d",&k);
    d = kdivisor(n,k);
    printf("El divisor : %d", d);
    return 0;
}

int kdivisor(int N, int K){
    int i=1,x;
    while(i!=K){
        x = N / i;
        if(x != 0){
            i++;
        }
    }
    return x;
}
