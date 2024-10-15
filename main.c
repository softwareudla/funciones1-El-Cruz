#include <stdio.h>
#include "funciones.h"

int main(){
    int opcion;

    do{
    titulo();
    scanf("%d", &opcion);
    
        switch (opcion){
        case 1:
            nuevoProducto();
            printf("\n");
            break;

        case 2:
            encontrar();
            printf("\n");
            break;

        case 3:
            altoYbajo();
            printf("\n");
            break;

        case 4:
            promedio();
            printf("\n");
            break;

        case 5:
            printf("\n\tCerrando programa...");
            printf("\n---------------------------------------------  ");
            break;
        
        default:
            break;
        }
    }while(opcion < 5 && opcion > 0);

    return 0;
}