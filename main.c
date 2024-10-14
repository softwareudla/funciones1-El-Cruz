#include <stdio.h>
#include "funciones.h"



int main(){
    
    int opcion;
    char nombre[10][50];
    float precio[10];
    int contador=0;

    do{
    titulo();
    scanf("%d", &opcion);
    switch (opcion){
    case 1:
        nuevoProducto();
        printf("\n");
        break;

    case 2:
       

    case 3:
        altoYbajo();
        break;

    case 4:
        float promedio = promedioPrecio();
        printf("\nEl precio promedio de los productos es: %d", promedio);
        break;

    case 5:
        printf("\n\tCerrando programa...");
        printf("\n---------------------------------------------  ");
        break;
    
    default:
        break;
    }
    }while(opcion != 5);

    return 0;
}