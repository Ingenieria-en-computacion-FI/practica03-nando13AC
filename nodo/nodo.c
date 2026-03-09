#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

/* TODO
   Definir la estructura Nodo.
   Debe contener un entero llamado valor.
*/
struct Nodo
{
    int valor;
};


/* Crear un nodo dinámicamente */
Nodo* crearNodo(int valor)
{
    /* TODO
       1 Reservar memoria con malloc
       2 Verificar que la memoria se haya asignado
       3 Inicializar el valor del nodo
       4 Regresar el nodo
    */
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
    /* TODO
       1 Verificar que el nodo no sea NULL
       2 Regresar el valor almacenado
    */
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
    /* TODO
       1 Verificar que el nodo no sea NULL
       2 Asignar el nuevo valor
    */
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
    /* TODO
       Liberar la memoria usando free
    */
    free(nodo);
}
