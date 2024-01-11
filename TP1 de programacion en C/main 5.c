
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char d,m,a,A[4] = {0,0,0,0,0},D[3] = {0,0} ,M[3] = {0,0};
    printf("Ingrese un numero de 8 digitos \n");
    for(i=1;i<9;i++){


        scanf("%c",&a);
        switch(i){
    case 1:
        A[0] = a;
    break;
     case 2:
        A[1] = a;
    break;
     case 3:
        A[2] = a;
    break;
     case 4:
        A[3] = a;
    break;
     case 5:
        M[0] = a;
    break;
     case 6:
        M[1] = a;
    break;
     case 7:
        D[0] = a;
    break;
     case 8:
        D[1] = a;
        A[4] = 0;
    break;

        }
    }
    printf("   Años : %s",A);
    printf("   Meses : %s",M);
    printf("   Dias : %s",D);

    return 0;
}
