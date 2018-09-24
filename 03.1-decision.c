/* Programa para mostrar la sintaxis de la estructura de control IF */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int a,b;

int main(){
    clear();
    printf("Bienvenido. Ingrese dos numeros enteros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a == b){
        printf("Los numeros ingresados son iguales...\n");
    }else{
        if(a > b){
            printf("%d es mayor que %d\n",a,b);
        }else{
            printf("%d es menor que %d\n",a,b);
        }
    }
    printf("------------------------\n");
    printf("\n");
    printf("Presione 'enter' para finalizar...");
    getchar();
    getchar();
    clear();
    return 0;
}