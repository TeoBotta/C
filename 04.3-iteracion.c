/* Aplicación para mostrar el funcionamiento de la sentencia DO..WHILE */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int i;
char sigue;

int main(){
    clear();
    i=0;
    printf("Bienvenido\n");
    do{
        i++;
        printf("Iteracion numero: %d. Desea seguir iterando? (s/n): ",i);
        scanf("%c",&sigue);
        getchar();
        clear();
    }while(sigue == 's');
    printf("Total de iteraciones realizadas: %d\n",i);
    printf("Presione 'enter' para finalizar...");
    getchar();
    clear();
    return 0;
}