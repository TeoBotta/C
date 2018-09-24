/* Programa para mostrar la sintaxis de la estructura de control SWITCH */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

float a,b,res;
char operacion;

int main(){
    clear();
    printf("Bienvenido. Ingrese dos numeros: ");
    scanf("%f",&a);
    scanf("%f",&b);
    getchar();
    printf("\n");
    printf("Ingrese operacion a realizar: ");
    scanf("%c",&operacion);
    clear();
    switch(operacion){
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            if(b != 0){
                res=a/b;
            }            
    }
    if((b == 0) && (operacion == '/')){
        printf("Error. Division por cero...");
    }else{
        printf("El resultado de %f %c %f es: %f\n",a,operacion,b,res);
    }
    printf("\n");
    getchar();
    printf("Presione la tecla 'enter' para finalizar...");
    getchar();
    clear();
    return 0;
}