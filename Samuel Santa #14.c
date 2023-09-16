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
- El siguiente programa presenta las tablas de multiplicar de 1 al 10
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    printf( "Este programa imprime las tablas de multiplicar del 1 al 10." );

    //se crea el ciclo do-while para imprimir las tablas de multiplicar del 1 al 10, se declaran las variables i y j, i para el numero de la tabla y j para el numero por el que se va a multiplicar i
    int i = 1, j = 1;
    do{
        printf( "\nTabla del %i:\n", i );

        //se crea el ciclo do-while para imprimir la tabla del numero i, se declara la variable j para el numero por el que se va a multiplicar i
        do{
            printf( "%i x %i = %i\n", i, j, i * j );
            j++;
        }while( j <= 10 );//fin del do-while

        i++;
        j = 1;//se reinicia el valor de j para la siguiente tabla
    }while( i <= 10 );//fin del do-while

    return 0;
}