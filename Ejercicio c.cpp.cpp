/*
programa: Mostrar los meses del año, pidiendole al usuario un numero entre 1-12 y mostrar al mes que corresponde.
Autor: Alejandro Santibañez Sanchez.
Fecha: 19/03/2017.
Resumen: Pedir los numeros al usuario del 1 a 13 y determinar a que mes corresponde.
*/


#include <stdio.h>

int main (){
    int mes;
    printf ("ingrese un numero del 1 al 12 para determinar que mes es \n");
    scanf ("%d", &mes);
    switch (mes){
    case 1: printf ("Enero \n");
        break;
    case 2: printf ("Febrero \n");
        break;
    case 3: printf ("Marzo \n");
        break;
    case 4: printf ("Abril \n");
        break;
    case 5: printf ("Mayo \n");
        break;
    case 6: printf ("Junio \n");
        break;
    case 7: printf ("Julio \n");
        break;
    case 8: printf ("Agosto \n");
        break;
    case 9: printf ("Septiembre \n");
        break;
    case 10: printf ("Octubre \n");
        break;
    case 11: printf ("Noviembre \n");
        break;
    case 12: printf ("Diciembre \n");
        break;
    default: printf ("no es un numero valido \n");
        break;
    }
return 0;
}
