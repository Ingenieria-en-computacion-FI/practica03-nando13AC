#include <stdio.h>
#include "fraccion.h"

int main()
{

    printf("Prueba del TAD Fraccion\n");

    // 1 Crear dos fracciones
   
    Fraccion* f1 = crearFraccion(1, 3);
    Fraccion* f2 = crearFraccion(4, 5);
 
    //Imprimir fracción 1
    printf("Fraccion 1: ");
    imprimir(f1);
    printf("\n");

    //Imprimir fracción 2
    printf("Fraccion 2: ");
    imprimir(f2);
    printf("\n");

    //2 Sumar fracciones
    printf("\nSuma de fracciones:\n");
    Fraccion* resultado = sumar(f1, f2);

    //3 Imprimir resultado
    printf("Resultado: ");
    imprimir(resultado);
    printf("\n");

    //4 Liberar memoria
    destruir(f1);
    destruir(f2);
    destruir(resultado);

    return 0;
}
