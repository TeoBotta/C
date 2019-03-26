/* Archivo para explicar sintaxis en el manejo de arreglos */
/* Arreglos unidimensionales */

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int vec[5]; //Defino un arreglo unidimensional de 5 posiciones de tipo entero
int i=0;  //Variable utilizada como indice para el manejo del arreglo

int main(){
    clear();
    for(i; i<5; i++){   //Iteracion para carga de datos del arreglo
        printf("Ingrese valor a guardar en la posicion %d: ",i);
        scanf("%d",&vec[i]);
        printf("--------------------------------------------\n");        
    }
    clear();
    for(i=0; i<5; i++){   //Iteracion para muestreo de los datos cargados en el arreglo
        printf("El valor guardado en la posicion %d es: %d \n",i,vec[i]);
        printf("\n");
    }
    getchar();
    printf("Presione cualquier tecla para finalizar...");
    getchar();
    clear();
    return 0;
}