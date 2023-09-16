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
- El siguiente programa genera la suma de la serie de Taylor para cos(x)
 Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo int, numero
int Factorial( int numero )
{    
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        int resultado = 1;//se declara la variable resultado de tipo int con un valor de 1, siendo este el factorial de 0
        int n = 1;//se declara la variable n para el ciclo do-while, se inicializa en 0, se evalua si n es menor que numero y se incrementa en 1
        do{
            resultado *= n;
            n++;
        }while (n <= numero);//fin del do-while
        return resultado;
    }//fin del if
}//fin de la función Factorial

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Este programa genera la suma de la serie de Taylor para cos(x)" );
    printf( "\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    float cos = 1;//se declara la variable cos de tipo flotante con un valor de 1, siendo este el primer termino de la serie de Taylor
    int i = 1;//se declara la variable i para el ciclo do-while, se inicializa en 1, se evalua si i es menor o igual que n y se incrementa en 1
    do{
        cos += ( pow( -1, i ) * pow( x, ( 2 * i ) ) ) / Factorial( 2 * i );
        i++;
    }while( i <= n );//fin del do-while
    
    printf( "El coseno de %g es igual a: %f", x, cos );
    
    return 0;
}