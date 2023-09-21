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
- El siguiente programa presenta la serie de Bell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado, ademas se hizo un cambio en la 
formula usada en el contrato, en su lugar se utilizo la siguiente formula B(termino de la serie) = 1/e * sumatoria desde k=0 de k^n / k! ( entre el numero final de la sumatoria sea mayor, mas aproximado estara el termino resultante)
*/
#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo float, numero
float Factorial( float numero )
{    
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        float resultado = 1;//se declara la variable resultado de tipo float con un valor de 1, siendo este el factorial de 0
        int n = 1;//se declara la variable n para el ciclo do-while, se inicializa en 0, se evalua si n es menor que numero y se incrementa en 1
        do{
            resultado *= n;
            n++;
        }while (n <= numero);//fin del do-while
        return resultado;
    }//fin del if
}//fin de la función Factorial



//se crea la función Sumatoria con tres parámetros de tipo entero, k, termino,limite que se encarga de hacer la sumatoria necesaria para hallar cada termino de la serie
float Sumatoria( int k, int termino, int limite )
{
    float resultado = 0;//se declara la variable resultado de tipo float con un valor de 0

    do{
        resultado += ( pow( k, termino ) / Factorial( k ) );
        k++;
    } while( k <= limite );//fin del do-while

    //se multiplica el resultado de la sumatoria por 1/e para obtener el termino de la serie ( e = numero euler )
    return ( resultado * ( 1 / 2.718281828459045235 ) );

}//fin de la función Sumatoria

int main()
{
    int cantidadDeTerminos = 0;//se declara la variable cantidadDeTerminos de tipo entero con un valor conocido
    
    printf( "El siguiente programa presenta la serie de Bell: B(n) = 1/e * Σ(k=0, ∞) (k^n/k!),\ndonde B(0) = 1 y B(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );
    
    //se declara la variable contador para el ciclo do-while, se inicializa en 0, se evalua si contador es menor que cantidadDeTerminos y se incrementa en 1
    int contador = 0;
    do{
        printf( "%g, ", Sumatoria( 0, contador, 100 ) );//se llama a la funcion sumatoria para hallar el termino de la serie
                //se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
        contador++;
    }while ( contador < cantidadDeTerminos );//fin del do-while

    return 0;
}