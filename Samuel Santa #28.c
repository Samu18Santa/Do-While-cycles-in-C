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
                                       A
                                      AA
                                     AAA
                                    AAAA
                                   AAAAA
                                  AAAAAA
                                   AAAAA
                                    AAAA
                                     AAA
                                      AA
                                       A
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    do{
        printf( "A" );
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

int  main()
{
    int fila = 1, cantidadDeEspacios = 39 ;//se declara la variable fila de tipo entero para las filas en los ciclos while y se inicializa en 1, ademas se declara la variable cantidaDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada fila y se le da el valor de 39

    //se crea el ciclo do-while para imprimir las primeras 6 filas, se inicia con la variable fila en 1, se evalua si fila es menor o igual a 6 y se incrementa en 1, esta para cada fila del diseño
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        cantidadDeEspacios--;
        fila++;
    }while( fila <= 6 );//fin del do-while

    //se crea el ciclo do-while para imprimir las ultimas 5 filas, se inicia con la variable fila en 6, se evalua si fila es menor o igual a 1 y se incrementa en 1, esta para cada fila del diseño, ademas se le da valor de 35 a la variable cantidadDeEspacios y se crea la variable cantidaDeLetras con un valor de 5 para la cantidad de letras A que se van a imprimir en cada fila respectivamente

    cantidadDeEspacios = 35;
    int cantidaDeLetras = 5;
    
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidaDeLetras );
        SaltoDeLinea();
        cantidadDeEspacios++;
        cantidaDeLetras--;
        fila++;
    }while ( fila <= 11 );//fin del do-while

    return 0;
}