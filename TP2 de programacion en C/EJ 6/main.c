#include <stdio.h>
#include <stdlib.h>

int kmultiplo (int N, int K);

int main()
{
    int n,k,S;
    printf("Ingresa el numero entero");
    scanf("%d",&n);
    printf("Ingresa el numero por el cual se va a sacar la suma de multiplos");
    scanf("%d",&k);
    S = kmultiplo(n,k);
    printf("La suma de sus multiplos es : %d",S);
    return 0;
}

int kmultiplo (int N, int K){
    int i=1,s=0,x;
    for(i=1;i<N;i++){
        x = i * K;
        s = s + x;
        if(x == N ){
            break;
        }
        }
    return s;
}
