#include <stdio.h>
#include <stdlib.h>
#define Notas 10

int main()
{
    char no[Notas] = {5,3,2,9,1,8,10,7,6,9},i;
    float prom=0,res;

   for (i=0;i<Notas;i++){
    prom += no[i];
   }
   res = prom / Notas;
   printf("El promedio de las notas es : %.2f\n",res);
   system("pause");
    return 0;
}
