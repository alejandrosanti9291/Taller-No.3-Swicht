/*
Programa: Indica si es una vocal o no
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Indica si es una vocal o no
*/

#include<stdio.h>
#include<conio.h>
int main(){

    char vocal;
	printf("Ingresa una vocal \n");
    vocal = getche();
    switch(vocal){
        case 'a': 	printf("La vocal es a \n");
            break;
        case 'e': 	printf("La vocal es e \n");
            break;
        case 'i':    printf("La vocal es i \n");
            break;
        case 'o':   printf("La vocal es o \n");
            break;
        case 'u':   printf("La vocal es u \n");
            break;
        default:   printf("No es una vocal \n");
	}

    return 0;
}
