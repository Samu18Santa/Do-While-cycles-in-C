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
- El siguiente programa presenta la serie de Motzkin sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

int main()
{
    int primerValor = 1, segundoValor = 1, auxiliar = 0, cantidadDeTerminos = 0;//se declaran las variables necesarias para el programa, primerValor y segundoValor para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y cantidadDeTerminos para almacenar el numero de terminos ingresado por el usuario.

    printf( "El siguiente programa presenta la serie de Motzkin: M(n) = M(n-1)\n+ Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) =1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i de la serie de Motzkin son: ", cantidadDeTerminos );

    //se declara la variable contador para el ciclo do-while, se inicializa en 2 ya que los primeros terminos ( 0 y 1 ) no se debenn iterar,, se evalua si contador es menor que cantidadDeTerminos+1 y se incrementa en 1
    int contador = 2;
    do{
        printf( "%i, ", primerValor );
        auxiliar = ( ( ( ( 2 * contador + 1 ) * segundoValor ) + ( ( 3 * contador - 3 ) * primerValor ) ) / ( contador + 2 ) );
        primerValor = segundoValor;
        segundoValor = auxiliar;
        contador++;
    }while ( contador <= cantidadDeTerminos+1 );//fin del do-while

    return 0;
}