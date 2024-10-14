#include <stdio.h>
#include "funciones.h"

int opcion;
    char nombre[10][50];
    float precio[10];
    int contador=0;

void titulo(){
    printf("\n\n Inventario Tienda Los Pollitos Dicen\n");
    printf("==============================================\n");
    printf("1. Ingresar nuevo producto: \n");
    printf("2. Buscar productos: \n");
    printf("3. Producto más caro y el más barato: \n");
    printf("4. Precio promedio: \n");
    printf("5. Salir: \n");
    
}
void nuevoProducto(){
    printf("Ingrese el nombre del producto %d: ", contador + 1);
    fflush(stdin);
    fgets(nombre[contador], 20, stdin);

    printf("Ingrese el precio: ");
    scanf("%f", &precio[contador]);

    contador++;
}


void altoYbajo(){
    int max = 0, min = 1000;
    int indicemax=0, indicemin=0;
    int i,j;
    
    for(i = 0; i < contador; i++){
        if(precio[i]>max){
        max = precio[i];
        indicemax = i;
        }
    }
    for(j = 0; j < contador; j++){
        if(precio[j]<min){
        min = precio[j];
        indicemin = j;
        }
    }
    printf("El producto más caro es: %s\n", nombre[indicemax]);
    printf("El producto más barato es: %s\n", nombre[indicemin]);
    
}


int main(){

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
        
        break;

    case 5:
        printf("\n\tCerrando programa...");
        printf("\n---------------------------------------------  ");
        break;
    
    default:
        break;
    }
    }while(opcion < 5 && opcion >5);

    return 0;
}