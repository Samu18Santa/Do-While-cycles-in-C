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
- El siguiente programa Imprime dos A separadas por espacios, al imprimirlas rapdido y con varios saltos de linea,
se consigue un efecto de movimiento
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>
#include <windows.h>

void ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    while( inicioEspacios < finalEspacios ){//no se hace uso de do-while para evitar que se imprima un espacio de mas en el ultimo llamado
        printf( " " );
        inicioEspacios++;
    }
}//fin de la función ImprimirEspacios

void ImprimirA()
{
    printf( "A" );
}

int main()
{
    int espacioInicial = 0, espacioMedio = 78;//se declaran las variables necesarias para el programa, espacioInicial para los espacios al inicio de cada columna y espacioMedio para los espacios entre las dos A
    
    do{
        ImprimirEspacios( 0, espacioInicial );
        ImprimirA();
        ImprimirEspacios( 0, espacioMedio );
        ImprimirA();
        Sleep( 200 );
        if( espacioMedio != 0 )
            system( "cls" );
        espacioInicial++;
        espacioMedio -= 2;
    }while( espacioMedio >= 0  );//fin del do-while
    printf( "\n" );
    system( "pause" );

    return 0;
}