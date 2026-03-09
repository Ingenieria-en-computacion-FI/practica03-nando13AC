#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"

 //Definir la estructura Pelicula
 struct Pelicula
 {
    char* titulo;
    int anio;
    char* genero;

    char* directores[MAX_DIRECTORES];
    int numDirectores;
 };

 //Crear función auxiliar para copiar cadenas usando malloc + strcpy0
 char* copiarCadena(const char* texto)
 {
    char* copia = malloc(strlen(texto) + 1);
    strcpy(copia, texto);
    return copia;
 }


 //Crear película
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero)
{
    Pelicula* p = malloc(sizeof(Pelicula));

    p->titulo = copiarCadena(titulo);
    p->genero = copiarCadena(genero);

    p->anio = anio;
    p->numDirectores = 0;

    return p;
}


 //Imprimir película
 void imprimir(Pelicula* p)
 {
    printf("Titulo: %s\n", p->titulo);
    printf("Año: %d\n", p->anio);
    printf("Genero: %s\n", p->genero);

    printf("Directores:\n");

    for(int i = 0; i < p->numDirectores; i++)
    {
        printf(" - %s\n", p->directores[i]);
    }
 }


 //Cambiar género
 void cambiarGenero(Pelicula* p, const char* nuevoGenero)
 {
    free(p->genero);
    p->genero = copiarCadena(nuevoGenero);
 }


 //Agregar director
 void agregarDirector(Pelicula* p, const char* director)
 {
    if(p->numDirectores >= MAX_DIRECTORES)
    {
        printf("No se pueden agregar mas directores\n");
        return;
    }

    p->directores[p->numDirectores] = copiarCadena(director);
    p->numDirectores++;
 }


/* Liberar memoria */
void destruir(Pelicula* p)
{
     free(p->titulo);
    free(p->genero);

    for(int i = 0; i < p->numDirectores; i++)
    {
        free(p->directores[i]);
    }

    free(p);
}
