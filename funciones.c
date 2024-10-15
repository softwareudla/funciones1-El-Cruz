#include <stdio.h>
#include "funciones.h"
#include <string.h>


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
    nombre[contador][strcspn(nombre[contador], "\n")] = 0;

    printf("Ingrese el precio: ");
    scanf("%f", &precio[contador]);

    contador++;
}
void encontrar() {
    char buscap[50]; // Aumentar el tamaño a 50 para el nombre del producto
    printf("Ingrese el producto del cual necesita información: ");
    fflush(stdin);
    fgets(buscap, 50, stdin);
    buscap[strcspn(buscap, "\n")] = 0; // Quitar el salto de línea - se puede eliminar?

    int encontrado = 0;
    for (int i = 0; i < contador; i++) {
        if (strcmp(nombre[i], buscap) == 0) {
            printf("El precio del producto %s es: %.2f\n", nombre[i], precio[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
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
void promedio(){
    float suma, prom;
    for (int i = 0; i < contador; i++)
    {
        suma += precio[i];
    }
    prom = suma / contador;
    printf("El precio promedio de los productos es: %.2f\n", prom);
    
}