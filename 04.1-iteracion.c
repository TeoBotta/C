/* Archivo para explicar la sentencia FOR */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int main(){
    clear();
    printf("La siguiente es una iteracion incondicional...\n");
    printf("-----------------------\n");
    for(int i=1; i<=10; i++){   //La variable puede declararse en la misma iteración
        printf("Iteracion numero: %d\n",i);
    }
    printf("-----------------------\n");
    printf("Presione 'enter' para finalizar...");
    getchar();
    clear();
    return 0;
}