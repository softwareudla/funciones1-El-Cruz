#include <stdio.h>
#include "funciones.h"
#include <string.h>

    char nombre[10][50];
    int precio[10];
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
    scanf("%d", &precio[contador]);

    contador++;
}


void altoYbajo(){
    int max = 0, min = 100;
    int indicemax, indicemin;
    int i;
    
    for(i = 0; i < 10; i++){
        if(precio[i]>max){
        max = precio[i];
        indicemax = i;
        }
    }
    for(i = 0; i < 10; i++){
        if(precio[i]<min){
        min = precio[i];
        indicemin = i;
        }
    }
    printf("El producto más caro es: %s\n", nombre[indicemax]);
    printf("El producto más barato es: %s\n", nombre[indicemin]);
    
}

void promedioPrecio(int contador){
    float j;
    for (int i = 0; i < contador; i++)
    {
        j+= precio[i];
    }
    float promedio= j/contador;
    printf("\nEl precio promedio de los productos es: %f", promedio);    
}