/*- Fecha de publicación: 2023-09-24
- Hora: 10:00 a.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presenta la serie de Pell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

int main()
{
    int primerValor=0, segundoValor=1, auxiliar=0, cantidadDeTerminos=0;//se declaran las variables necesarias para el programa, primerValor y segundoValor para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y cantidadDeTerminos para almacenar el número de términos que desea el usuario.
    
    printf( "El siguiente programa presenta la serie de Pell: P(n) = 2P(n-1) + P(n-2),\ndonde P(0) = 0 y P(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Pell son: ", cantidadDeTerminos );

    //se declara la variable i para el ciclo do-while, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    int i = 0;
    do{
        printf( "%i, ", primerValor );        
        auxiliar =  primerValor + ( segundoValor * 2 );
        primerValor = segundoValor;
        segundoValor = auxiliar;
        i++;
    }while ( i < cantidadDeTerminos );//fin del do-while
    
    return 0;
}