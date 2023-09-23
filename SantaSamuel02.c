/*- Fecha de publicación: 2023-09-24
- Hora: 2:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C 
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presentalos elementos de la serie de Fibonacci entre 0 y 100 y su suma.
- Salvedad: El programa no admite ingreso de datos.
*/
#include <stdio.h>

int main()
{
    int i = 0, primerNumero = 0, segundoNumero = 1, auxiliar = 0, sumaFibonacci = 0;//se declaran las variables necesarias para el programa, i que funcionara como contador, primerNumero y segundoNumero para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y sumaFibonacci para almacenar la suma de los valores de la serie.

    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son:\n" );

    do{
        printf( "%i, ", primerNumero );
        sumaFibonacci += primerNumero;
        auxiliar = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
        i++;
    }while ( i < 11 );//fin del do-while

    printf( "%i y su suma es %i", primerNumero, sumaFibonacci + primerNumero );//se imprime el último valor de la serie y la suma de los valores de la serie

    return 0;
}
