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
- El siguiente programa lee un número entero positivo e imprime su factorial, siendo:
N! = 1 x 2 x 3 x 4 x ... N
N! = 1 si N = 0
- Salvedad: El programa admite solo números enteros positivos, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

//se crea la función Factorial con un parámetro de tipo int, numero
int Factorial( int numero )
{    
    int resultado = 1;//se declara la variable resultado de tipo int con un valor de 1, siendo este el factorial de 0
    int n = 1;//se declara la variable n para el ciclo do-while, se inicializa en 0, se evalua si n es menor que numero y se incrementa en 1
    do{
        resultado *= n;
        n++;
    }while (n <= numero);//fin del do-while
    return resultado;
}//fin de la función Factorial


//se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    while( numero < 0 )//no es posible usar un do-while porque se haria este proceso almenos una vez asi no fuera necesario
    {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    }//fin del while

    return numero;
    
}//fin de la función ValidarNumero

int main()
{
    int numero = 0;//se crea la variable numero de tipo entero con un valor conocido

    printf( "El siguiente programa lee un número entero positivo e imprime su factorial.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    numero= ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo
  
    printf( "El factorial de %i es: %i", numero, Factorial( numero ) );//se imprime el factorial del numero ingresado por el usuario
  
    return 0;
}