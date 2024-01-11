#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s,r,m;
    float d;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b==0){
        printf("Error al ingresar el segundo numero para la division");
        m = a * b;
        s = a + b ;
        r = a - b;
        printf("A dividido por B es : %.2f",d);
        printf("\nA multiplicado por B es : %d",m);
        printf("\nA sumado por B es : %d",s);
        printf("\nA restado por B es : %d",r);
    } else if (b!=0){
        d =(float)a / b;
        m = a * b;
        s = a + b ;
        r = a - b;
        printf("A dividido por B es : %.2f",d);
        printf("\nA multiplicado por B es : %d",m);
        printf("\nA sumado por B es : %d",s);
        printf("\nA restado por B es : %d",r);
    }



    return 0;
}
