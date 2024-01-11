#include <stdio.h>
#include <stdlib.h>

int su(int A, int B);
int re(int A, int B);
int mult(int A, int B);
int divi(int A, int B);


int main()
{
    int i=1,a,b,s,r,d,m;
    char x;
    while(i!=0){
    printf("Eliga La operacion que quiere realizar");
    printf("\na-Sumar");
    printf("\nb-Restar");
    printf("\nc-Multiplicar");
    printf("\nd-Dividir");
    printf("\ne-Salir\n");
    scanf("%c",&x);
    system("cls");
    switch(x){
case 'a':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    s = su(a,b);
    printf("El resultado es : %d\n", s);
    system("pause");
    system("cls");
break;
case 'A':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    s = su(a,b);
    printf("El resultado es : %d\n", s);
    system("pause");
    system("cls");
break;
case 'b':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    r = re(a,b);
    printf("El resultado es : %d\n", r);
    system("pause");
    system("cls");
break;
case 'B':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    r = re(a,b);
    printf("El resultado es : %d\n", r);
    system("pause");
    system("cls");
break;
case 'c':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    m = mult(a,b);
    printf("El resultado es : %d\n", m);
    system("pause");
    system("cls");
break;
case 'C':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    m = mult(a,b);
    printf("El resultado es : %d\n", m);
    system("pause");
    system("cls");
break;
case 'd':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    d = divi(a,b);
    printf("El resultado es : %d\n", d);
    system("pause");
    system("cls");
break;
case 'D':
    printf("Ingrese dos numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    d = divi(a,b);
    printf("El resultado es : %d\n", d);
    system("pause");
    system("cls");
break;
case 'e':
    i=0;
break;
case 'E':
    i=0;
break;
default:

    break;
    }
        }
    return 0;
}
int su(int A, int B){
int S;
S = A + B;
return S;
}
int re(int A, int B){
int R;
R = A - B;
return R;
}
int mult(int A, int B){
int M;
M = A * B;
return M;
}
int divi(int A, int B){
int D;
D = A / B;
return D;
}
