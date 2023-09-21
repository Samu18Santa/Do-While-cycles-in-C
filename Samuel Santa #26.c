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
Z                 Z
 Z               Z
  Z             Z
   Z           Z
    Z         Z
     Z       Z
      Z     Z
       Z   Z
        Z Z
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
}//fin de la función ImprimirLetras

//se crea la función ImprimirEspacios con un parámetro de tipo entero, cantidadDeEspacios para imprimir los espacios de cada columna
void ImprimirEspacios( int cantidadDeEspacios )
{
    while( 1 <= cantidadDeEspacios ){//no se hace uso de do-while para evitar que se imprima un espacio en el primer llamado
        printf( " " );
        cantidadDeEspacios--;
    }
}//fin de la función ImprimirEspacios

int main()
{
    int espaciosIniciales = 0, espaciosMedios = 17;//se declaran las variables necesarias para el programa, espaciosIniciales y espaciosMedios para la cantidad de espacios que se van a imprimir al inicio o medio de cada linea

    //se declara la variable fila para el ciclo do-while, se inicializa en 1, se evalua si fila es menor o igual a 10 y se incrementa en 1, esta para cada fila del diseño
    int fila = 1;
    do{
        ImprimirEspacios( espaciosIniciales );
        ImprimirLetras( 1 );
        ImprimirEspacios( espaciosMedios );

        //se evalua si fila es diferente de 10 para imprimir la segunda Z al final de cada linea
        if ( fila != 10 )
        {
            ImprimirLetras( 1 );
            printf( "\n" );
        }
        espaciosIniciales++;
        espaciosMedios -= 2;
        fila++;
    }while( fila <= 10 );//fin del do-while

    return 0;
}