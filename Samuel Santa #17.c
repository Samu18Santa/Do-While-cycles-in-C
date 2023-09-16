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
    printf( "Parejas de enteros: \n" );
    int fila1=0, fila2=1, contadorFila2=1;//se declaran las variables fila1, fila2 y contadorFila2 para el programa, fila1 para el primer valor de la pareja, fila2 para el segundo valor de la pareja y contadorFila2 para contar las veces que se imprime el valor de fila2

    do{
        if ( contadorFila2 < 2 ){ 
            printf( "%i %i\n", fila1, fila2 );
            fila1++;//se aumenta el valor de fila1 en 1
            contadorFila2++;//se aumenta el valor de contadorFila2 en 1
        }//de lo contrario
        else{
            printf( "%i %i\n", fila1, fila2 );
            fila1++;//se aumenta el valor de fila1 en 1
            fila2++;//se aumenta el valor de fila2 en 1
            contadorFila2--;//se disminuye el valor de contadorFila2 en 1
        }//fin del if contadorFila2 < 2
    }while( fila1 <= 9 );//fin del do-while fila1 <= 9

    return 0;
}