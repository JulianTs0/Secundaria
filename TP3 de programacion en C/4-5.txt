#include <stdio.h>
#include <stdlib.h>
#define cont 30

void hist(int A);

int main()
{
    int notas[cont],i,cant[10] = {0,0,0,0,0,0,0,0,0,0};
    float prom= 0;

    for(i=0;i<cont;i++){
        printf("Ingrese la nota de un alumno \n");
        scanf("%d",&notas[i]);
        if(notas[i] > 10 || notas[i] < 0 ){
                printf("Error Vuelva a ingresar el valor \n");
                i--;
            }
        prom += notas[i];
    }
    system ("cls");
    prom /= cont;
    printf("El promedio es %.2f \n",prom);

    for(i=0;i<cont;i++){
        switch (notas[i]){
    case 1:
        cant[0] += 1;
        break;
    case 2:
        cant[1] += 1;
        break;
    case 3:
        cant[2] += 1;
        break;
    case 4:
        cant[3] += 1;
        break;
    case 5:
        cant[4] += 1;
        break;
    case 6:
        cant[5] += 1;
        break;
    case 7:
        cant[6] += 1;
        break;
    case 8:
        cant[7] += 1;
        break;
    case 9:
        cant[8] += 1;
        break;
    case 10:
        cant[9] += 1;
        break;
        }
    }
        printf("\nNotas que sean 1: "); hist(cant[0]);
        printf("\nNotas que sean 2: "); hist(cant[1]);
        printf("\nNotas que sean 3: "); hist(cant[2]);
        printf("\nNotas que sean 4: "); hist(cant[3]);
        printf("\nNotas que sean 5: "); hist(cant[4]);
        printf("\nNotas que sean 6: "); hist(cant[5]);
        printf("\nNotas que sean 7: "); hist(cant[6]);
        printf("\nNotas que sean 8: "); hist(cant[7]);
        printf("\nNotas que sean 9: "); hist(cant[8]);
        printf("\nNotas que sean 10: "); hist(cant[9]);
    return 0;
}

void hist(int A){
int i;
for(i=0;i<A;i++){
    printf("*");
}

}

