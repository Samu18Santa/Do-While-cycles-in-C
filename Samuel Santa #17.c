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
- El siguiente programa genera las siguientes parejas de enteros:
0 1
1 1
2 2
3 2
4 3
5 3
6 4
7 4
8 5
9 5
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int  main()
{
    int columna1=0, columna2=1, contadorColumna2=1;//se declaran las variables columna1, columna2 y contadorColumna2 para el programa, columna1 para el primer valor de la pareja, columna2 para el segundo valor de la pareja y contadorColumna2 para contar las veces que se imprime el valor de columna2

    printf( "Parejas de enteros: \n" );

    //se evaluara si columna1 es menor o igual a 9, esta para las 10 filas del diseño [0 a 9]
    do{
        //se evalua si contadorColumna2 es menor a 2, esta para imprimir el valor de columna2 2 veces
        if ( contadorColumna2 < 2 ){ 
            printf( "%i %i\n", columna1, columna2 );
            columna1++;//se aumenta el valor de columna1 en 1
            contadorColumna2++;//se aumenta el valor de contadorColumna2 en 1
        }//de lo contrario
        else{
            printf( "%i %i\n", columna1, columna2 );
            columna1++;//se aumenta el valor de columna1 en 1
            columna2++;//se aumenta el valor de columna2 en 1
            contadorColumna2--;//se disminuye el valor de contadorColumna2 en 1
        }//fin del if contadorColumna2 < 2
    }while( columna1 <= 9 );//fin del do-while columna1 <= 9

    return 0;
}