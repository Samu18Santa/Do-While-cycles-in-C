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
- El siguiente programa imprime en pantalla el siguiente diseño:
                                                                               A
                                                                              AA
                                                                             AAA
                                                                            AAAA
                                                                           AAAAA
                                                                          AAAAAA
                                                                         AAAAAAA
                                                                        AAAAAAAA
                                                                       AAAAAAAAA
                                                                      AAAAAAAAAA
                                                                     AAAAAAAAAAA
                                                                    AAAAAAAAAAAA
                                                                   AAAAAAAAAAAAA
                                                                  AAAAAAAAAAAAAA
                                                                 AAAAAAAAAAAAAAA
                                                                AAAAAAAAAAAAAAAA
                                                               AAAAAAAAAAAAAAAAA
                                                              AAAAAAAAAAAAAAAAAA
                                                             AAAAAAAAAAAAAAAAAAA
                                                            AAAAAAAAAAAAAAAAAAAA
                                                           AAAAAAAAAAAAAAAAAAAAA
                                                          AAAAAAAAAAAAAAAAAAAAAA
                                                         AAAAAAAAAAAAAAAAAAAAAAA
                                                        AAAAAAAAAAAAAAAAAAAAAAAA
                                                       AAAAAAAAAAAAAAAAAAAAAAAAA
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    int cantidadDeLetras = 1, cantidadDeEspacios = 79;//se declaran las variables necesarias para el programa, cantidadDeLetras para la cantidad de letras A que se van a imprimir y cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada linea

    //se crea el ciclo do-while para imprimir el diseño, se declaran las variables i, j y k, i para el numero de lineas, j para la cantidad de espacios al inicio de cada linea y k para la cantidad de letras A que se van a imprimir
    int i = 1, j = 1, k = 1;
    do{
        do{
            printf( " " );
            j++;
        }while( j <= cantidadDeEspacios );

        do{
            printf( "A" );
            k++;
        }while( k <= cantidadDeLetras );

        printf( "\n" );
        cantidadDeEspacios--;
        cantidadDeLetras++;
        i++;
        //se reinician los valores de j y k para la siguiente linea
        j = 1;
        k = 1;
    }while(  i <= 25 );//fin del do-while

    return 0;
}