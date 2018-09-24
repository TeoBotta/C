/* Archivo básico para para explicar el manejo de variables en C */

//Declaro librerías a usar
#include <stdio.h>

#define clear() printf("\033[H\033[J")  //Función definida para simular el clear screen sin necesidad de librerías externas


//Declaro variables a usar
int a;      //Tipo entero
char b;     //Tipo caracter
float c;    //Tipo real
char d[10]; //Tipo string (limitación de 10)

int main(){
    clear();
    printf("Bienvenido....\n");
    printf("Ingrese un valor entero: ");
    //La toma de variables se hace con un '&' anterior al nombre de la variable
    scanf("%d",&a); //Usamos %d para variables de tipo entero
    printf("\n");
    getchar();  //Por alguna razón, acá tengo que usar el 'getchar' para que no me saltee la toma del caracter
    printf("Ahora un caracter: ");
    scanf("%c",&b); //Usamos %c para variables de tipo caracter
    printf("\n");
    printf("Y ahora un real: ");
    scanf("%f",&c); //Usamos %f para variables de tipo real
    printf("\n");
    printf("Para terminar, ingresa una cadena de caracteres: ");
    scanf("%s",d);
    printf("\n");
    printf("Los valores ingresados fueron los siguientes:\n");
    printf("---------------------------------------------\n");
    printf("El entero ingresado fue: %d\n",a);
    printf("El caracter: %c\n",b);
    printf("El real: %f\n",c);
    printf("Y el string: %s\n",d);
    printf("---------------------------------------------\n");
    printf("\n");
    printf("Presione 'enter' para finalizar...");
    getchar();
    getchar();  //Tengo que usar 2 veces el comando 'getchar'. Si lo aplico una sola vez antes del 'return', no me lo reconoce
    clear();
    return 0;
}