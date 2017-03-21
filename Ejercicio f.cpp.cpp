/*
Programa: Realizar un menu
Autor: Alejandroi Santibañez Sanchez
Fecha: 16/03/2017
Reusmen: Programa que cree en menu con las opciones: cubo de un numero, numero impar y salir.
*/

#include <stdio.h>
#include <math.h>
int main () {

    int opcion, x;
    float cubo;
    printf("1. Calcular el cubo de un numero \n");
    printf("2. Saber si numero es par o impar \n");
    printf("3. Salir \n\n");
    printf("Ingrese la opcion que desea realizar \n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
             printf("Digite el numero: ");
             scanf("%d", &x);
             cubo = pow(x,3);
             printf("El cubo del numero es: %f \n",cubo); break;
        case 2:
             printf("Digite el numero: ");
             scanf("%f", &x);
             if (x==0){
             printf("El numero es cero \n");
        } else if (x%2==0){
             printf("El numero es par \n");
         } else {
             printf("El numero es impar \n"); break;
      }
      case 3: break;
       default: printf("opcion no valida \n"); break;
    }
return 0;
}
