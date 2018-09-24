/*Programa para demostrar otras funciones básicas*/

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int a=3,b;

int main(){
    clear();
    printf("Ingrese un numero a sumarle a %d: \n",a);
    scanf("%d",&b);
    printf("%d + %d = ",a,b);
    b=b+a;
    printf("%d\n",b);
    printf("--------------------\n");
    printf("Ahora ingrese dos numeros a sumar: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d = ",a,b);
    b=b+a;
    printf("%d\n",b);
    printf("--------------------\n");
    printf("Ingrese 'enter' para finlalizar...");
    getchar();
    getchar();
    clear();
    return 0;
}