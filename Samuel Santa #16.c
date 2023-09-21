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
- El siguiente programa lee un número entero no negativo y muestra la suma de los
factoriales de todos los números desde 0 hasta el numero ingresado
- Salvedad: El programa admite números enteros no negativos, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

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
    int numero=0;//se crea la variable numero de tipo entero con un valor conocido

    printf( "El siguiente programa lee un número entero, no negativo y muestra la suma de los\nfactoriales de todos los números desde 0 hasta el numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario

    numero = ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es entero positivo

    int sumaTotal=0;//se crea la variable sumaTotal de tipo entero con un valor conocido para almacenar la suma de los factoriales

    //se declara la variable n para el ciclo do-while, se inicializa en 0, se evalua si n es menor que numero y se incrementa en 1, durante esto se van imprimiendo los factoriales y se van sumando.
    int n = 0;
    do{
        printf( "%i + ", Factorial( n ) );
        sumaTotal += Factorial( n );
        n++;
    }while( n < numero );//fin del do-while

    printf( "%i = %i", Factorial( numero ), ( sumaTotal + Factorial( numero ) ) );//se imprime el ultimo factorial y la suma total de los factoriales

    return 0;
}