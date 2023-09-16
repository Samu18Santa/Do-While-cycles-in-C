/*- Fecha de publicación: 2023-09-03
- Hora: 4:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presenta la serie de Triangular sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

int main()
{
    int primerValor = 1, segundoValor = 3, auxiliar = 0, cantidadDeTerminos=0;//se declaran las variables necesarias para el programa, primerValor y segundoValor para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y cantidadDeTerminos para almacenar el número de términos que desea el usuario.

    printf( "El siguiente programa presenta la serie de Triangular: T(n) = T(n-1) + (n-1)T(n-2),\ndonde T(0) = 1." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario    
    printf( "Los primeros %i términos de la serie Triangular son: ", cantidadDeTerminos );

    //se declara la variable i para el ciclo do-while, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    int i = 0;
    do{
        printf( "%i, ", primerValor );
        auxiliar = ( segundoValor - primerValor ) + ( segundoValor + 1 );
        primerValor = segundoValor;
        segundoValor = auxiliar;
        i++;
    }while ( i < cantidadDeTerminos );//fin del do-while

    return 0; 
}