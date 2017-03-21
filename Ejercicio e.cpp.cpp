/*
Programa: Hacer un programa que simule un cajero automatico con un saldo incial de $ 1.000.000 que permita ingresar dinero a la cuenta, retirar dinero e imprimir el saldo en la pantalla
Autor: Alejandro Santibañez Sanchez
Fecha: 15/03/2017
Resumen: Programa que simula un cajero automatico y que oermite ingresar dinero, retirar y consultar saldo.
*/

#include <stdio.h>
int main () {

    float extra, saldo = 0, retiro;
    int saldo_inicial = 1000000, opcion;
    printf("\tBienvenido a su cajero automatico \n\n");
    printf("1. Ingresar dinero a la cuenta \n");
    printf("2. Retirar dinero de la cuenta \n\n");
    printf("Ingrese la opcion que desea realizar \n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Digite la cantidad de dinero a ingresar ");
            scanf("%f", &extra);
            saldo = saldo_inicial + extra;
            printf("Su saldo es: %f \n",saldo); break;
        case 2:
            printf("Digite la cantidad de dinero a retirar: ");
            scanf("%f", &retiro);
            if(saldo_inicial < retiro){
                printf("No hay dinero suficiente para este retiro \n");
            }else {
            saldo = saldo_inicial - retiro;
            printf("Tu nuevo saldo es: %f \n",saldo); break;
            }

    }
return 0;
}
