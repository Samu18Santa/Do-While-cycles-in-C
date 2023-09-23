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
- El siguiente programa genera la suma de la serie de Taylor para In(x)
 Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado
*/
//Ejercicio 33

#include <stdio.h>
#include <math.h>

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Este programa genera la suma de la serie de Taylor para Ln(x)" );
    printf( "\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    float ln = x-1;//se declara la variable ln de tipo flotante con un valor de x-1, siendo este el primer termino de la serie de Taylor
    int i = 2;//se declara la variable i para el ciclo do-while, se inicializa en 2, se evalua si i es menor o igual que n y se incrementa en 1

    do{
        ln += ( pow( -1, ( i + 1 ) ) * ( ( pow( ( x - 1 ), i ) ) / i ) );
        i++;
    }while( i <= n );//fin del do-while
    
    printf( "El Ln de %g es igual a: %f", x, ln );
    
    return 0;
}