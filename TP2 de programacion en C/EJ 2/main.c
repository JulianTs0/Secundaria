#include <stdio.h>
#include <stdlib.h>

void su(int A, int B);
void re(int A, int B);
void mult(int A, int B);
void divi(int A, int B);

int S,R,D,M;

int main()
{
    int i=1,a,b;
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
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    su(a,b);
    printf("\nEl resultado es: %d\n",S);
    system("pause");
    system("cls");
break;
case 'A':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    su(a,b);
    printf("\nEl resultado es: %d\n",S);
    system("pause");
    system("cls");
break;
case 'b':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    re(a,b);
    printf("El resultado es: %d\n",R);
    system("pause");
    system("cls");
break;
case 'B':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    re(a,b);
    printf("\nEl resultado es: %d\n",R);
    system("pause");
    system("cls");
break;
case 'c':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    mult(a,b);
    printf("\nEl resultado es: %d\n",M);
    system("pause");
    system("cls");
break;
case 'C':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    mult(a,b);
    printf("\nEl resultado es: %d\n",M);
    system("pause");
    system("cls");
break;
case 'd':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    divi(a,b);
    printf("\nEl resultado es: %d\n",D);
    system("pause");
    system("cls");
break;
case 'D':
    printf("Ingrese dos valores enteros\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    divi(a,b);
    printf("\nEl resultado es: %d\n",D);
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
void su(int A, int B){
S = A + B;
return;
}
void re(int A, int B){
R = A - B;
return;
}
void mult(int A, int B){
M = A * B;
return;
}
void divi(int A, int B){
D = A / B;
return;
}

