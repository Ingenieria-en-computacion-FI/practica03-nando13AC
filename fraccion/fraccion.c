#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

 //Definir la estructura Fraccion
 struct Fraccion
 {
    int numerador;
    int denominador;
 };

 //Crear una función auxiliar para calcular el máximo común divisor (MCD)
 int mcd(int a, int b)
 {
    if (b == 0)
        return a;

    return mcd(b, a % b);
 }

 //Crear fracción
 Fraccion* crearFraccion(int num, int den)
 {
 if (den == 0)
    {
        printf("Error: denominador no puede ser 0\n");
        return NULL;
    }

    Fraccion* f = (Fraccion*)malloc(sizeof(Fraccion));

    f->numerador = num;
    f->denominador = den;

    simplificar(f);

    return f;
 }

 //Simplificar fracción
 void simplificar(Fraccion* f)
  {
    int divisor = mcd(f->numerador, f->denominador);

    f->numerador = f->numerador / divisor;
    f->denominador = f->denominador / divisor;
 }

 //Sumar fracciones
 Fraccion* sumar(Fraccion* a, Fraccion* b)
 {
    int num = (a->numerador * b->denominador) +
              (a->denominador * b->numerador);

    int den = a->denominador * b->denominador;

    Fraccion* resultado = crearFraccion(num, den);

    simplificar(resultado);

    return resultado;
 }

 //Imprimir fracción
 void imprimir(Fraccion* f)
 {
    printf("%d/%d", f->numerador, f->denominador);
 
 }
 //Liberar memoria
 void destruir(Fraccion* f)
 {
    free(f);
 }