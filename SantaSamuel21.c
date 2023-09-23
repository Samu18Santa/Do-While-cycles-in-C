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
PPPPPPPPPPPPP
 NNNNNNNNNNN
  LLLLLLLLL
   JJJJJJJ
    HHHHH
     FFF
      D
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con dos parámetros de tipo entero, cantidadDeLetras para imprimir las letras del diseño,y ascii para realizar los cambios de la letra en cada linea
void ImprimirLetras( int cantidadDeLetras, int ascii )
{
    while( 1 <= cantidadDeLetras ){
        printf( "%c", ascii );
        cantidadDeLetras--;
    }
}

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
    int cantidadDeLetras = 13, cantidadDeEspacios = 0, ascii = 80;//se declaran las variables necesarias para el programa, cantidadDeLetras para la cantidad de letras que se van a imprimir, cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada linea y ascii para el codigo ASCII de la letra que se va a imprimir

    //se declara la variable fila para el ciclo do-while, se inicializa en 1, se evalua si fila es menor o igual a 7 y se incrementa en 1, esta para cada fila del diseño
    int fila = 1;
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras, ascii );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
        ascii -=2 ;
        fila++;
    }while( fila <= 7 );//fin del do-while

    return 0;
}