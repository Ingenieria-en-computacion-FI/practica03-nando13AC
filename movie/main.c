#include <stdio.h>
#include "pelicula.h"

int main()
{

    printf("Prueba del TAD Pelicula\n");

    //Crear una película
    Pelicula* p = crearPelicula("El zorro y el sabueso", 1981, "Animacion");

    //Agregar algunos directores
    agregarDirector(p, "Ted Berman");
    agregarDirector(p, "Richard Rich");
    agregarDirector(p, "Art Stevens");

    //Imprimir película
    imprimir(p);

    //Cambiar genero
    printf("\nCambiar genero\n");
    cambiarGenero(p, "Familiar");

    //Imprimir nuevamente
    imprimir(p);

    //Liberar memoria
    destruir(p);

    return 0;
}
