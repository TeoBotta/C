/*Archivos para explicr sintaxis en el manejo de arreglos*/
/*Arreglo bidimensional*/

#include <stdio.h>

#define clear() printf("\033[H\033[J")

int mat[4][3];
int i,j;

int main(){
    clear();
    for(i=0;i<4;i++){   //Iteracion para la carga de datos en el arreglo
        for(j=0;j<2;j++){
            printf("Ingrese el valor a guardar en la fila %d, columna %d: ",i,j);
            scanf("%d",&mat[i][j]);
            printf("\n");
        }
        mat[i][2]=mat[i][0]+mat[i][1];
    }
    getchar();
    clear();
    for(i=0;i<4;i++){   //Iteracion para muestreo de sumatorias en ultima columna
        printf("La suma entre los elementos de la fila %d da como resultado: %d \n",i,mat[i][2]);
        printf("\n");
    }
    printf("-----------------------------------------------------\n");
    printf("\n");
    printf("Presione cualquier tecla para finalizar...");
    getchar();
    clear();
    return 0;
}