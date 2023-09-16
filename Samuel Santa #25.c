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

//Se crea la función ImprimirZ que imprime las letras Z
void ImprimirZ( int inicio, int final )
{   
    do{
        printf( "Z" );
        inicio++;
    }while( inicio <= final );
}

//se crea la función ImprimirEspacios para imprimir los espacios al inicio de cada columna
void ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    do{
        printf( " " );
        inicioEspacios++;
    }while( inicioEspacios <= finalEspacios );
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
void SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

int main()
{
    int fila=1, espacios=9, Z=1;//se declaran las variables fila, espacios y Z, fila para el ciclo do-while, espacios para la cantidad de espacios que se van a imprimir al inicio de cada columna y Z para la cantidad de letras Z que se van a imprimir en cada fila

    do{
        ImprimirEspacios( 1, espacios );
        ImprimirZ( 1, Z );
        SaltoDeLinea();
        fila++;
        espacios--;
        Z += 2;
    }while( fila <= 4);//fin del do-while
    
    espacios=7, Z=5;

    do{
        ImprimirEspacios( 1, espacios );
        ImprimirZ( 1, Z );
        SaltoDeLinea();
        fila++;
        espacios++;
        Z -= 2;
    }while( fila <= 7 );//fin del do-while

    return 0;
}