#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1,r2,rc,re,vcc,icq,ibq,vceq;
    printf("Ingresa la R1\n");
    scanf("%f",&r1);
    printf("Ingresa la R2\n");
    scanf("%f",&r2);
    printf("Ingresa la RC\n");
    scanf("%f",&rc);
    printf("Ingresa la RE\n");
    scanf("%f",&re);
    printf("Ingresa la Vcc\n");
    scanf("%f",&vcc);

    ibq = ((( r2 * vcc ) - (( r1 + r2 ) * 0.7)) / ((re * (80 + 1) * (r1 + r2)) + (r1 * r2)));
    icq = ibq * 80;
    vceq = vcc - (icq * (rc + ((80 + 1 )* re) / 80));

    printf("El punto de polarizacion es icq : %.6f",icq);
    printf("\n Y la Vceq : %.4f",vceq);

    return 0;
}
