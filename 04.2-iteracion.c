/* Aplicación para mostrar la sintaxis de la sentencia WHILE */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int i;
char sigue;

int main(){
    clear();
    i=0;
    printf("Bienvenido. Presione 's' para realizar las iteraciones, o 'n' para finalizarlas: ");
    scanf("%c",&sigue);
    clear();
    while(sigue == 's'){
        i++;
        printf("Esta es la iteracion numero: %d\n",i);
        printf("Desea continuar? (s/n): ");
        getchar();
        scanf("%c",&sigue);
        clear();
    }
    printf("Numero total de iteraciones realizadas: %d\n",i);
    printf("Presione 'enter' para finalizar...");
    getchar();
    getchar();
    clear();
    return 0;
}