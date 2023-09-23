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
- El siguiente programa imprime en pantalla el siguiente diseño:
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    do{
        printf( "Z" );
        cantidadDeLetras--;
    }while( 1 <= cantidadDeLetras );
}
//se crea la función ImprimirEspacios con un parámetro de tipo entero, cantidadDeEspacios para imprimir los espacios de cada columna
void ImprimirEspacios( int cantidadDeEspacios )
{
    do{
        printf( " " );
        cantidadDeEspacios--;
    }while( 1 <= cantidadDeEspacios );
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
void SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

int main()
{
    int fila=1, cantidadDeEspacios=9, cantidadDeLetras=1;//se declaran las variables fila, cantidadDeEspacios y cantidadDeLetras, fila para las  filas en los ciclos for, cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada columna y cantidadDeLetras para la cantidad de letras Z que se van a imprimir en cada fila

    //en este ciclo do-while se evalua si fila es menor o igual a 4 y se incrementa en 1, este para las 4 primeras filas
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios--;
        cantidadDeLetras += 2;
    }while( fila <= 4);//fin del do-while
    
    //se le das un valor de 7 a cantidadDeEspacios y de 5 a cantidadDeLetras, esto para las 3 ultimas filas
    cantidadDeEspacios=7, cantidadDeLetras=5;

    //en este ciclo se evalua si fila es menor o igual a 7 y se incrementa en 1, fila comenzando en 5
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }while( fila <= 7 );//fin del do-while

    return 0;
}