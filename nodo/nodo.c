#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo
{
    int valor;
};


/* Crear un nodo dinámicamente */
Nodo* crearNodo(int valor)
{
    Nodo* n = (Nodo*) malloc(sizeof(Nodo));

    if (n == NULL)
    {
        printf("Error: no se pudo asignar memoria\n");
        return NULL;
    }

    n->valor = valor;

    return n;
}


/* Obtener el valor almacenado */
int obtenerValor(Nodo* nodo)
{
    if (nodo == NULL)
    {
        printf("Error: nodo NULL\n");
        return 0;
    }

    return nodo->valor;
}


/* Modificar el valor almacenado */
void asignarValor(Nodo* nodo, int valor)
{
    if (nodo == NULL)
    {
        printf("Error: nodo NULL\n");
        return;
    }

    nodo->valor = valor;
}


/* Liberar memoria del nodo */
void destruirNodo(Nodo* nodo)
{
    free(nodo);
}
