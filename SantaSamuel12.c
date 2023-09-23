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
- El siguiente programa lee desde el teclado un número entero y lo imprime al revés.
- Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

int main(){

    int numero = 0;//se crea la variable numero de tipo entero con un valor conocido
    
    printf( "Este programa lee desde el teclado un número\nentero y lo imprime al revés.\nEntre el número: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario

    do{   
        printf( "%i", ( numero % 10 ) );//se imprime el residuo de la división entera de numero entre 10, osea el ultimo digito de numero
        numero = numero / 10; //se le asigna a la variable numero el valor de la división entera de numero entre 10, osea numero sin su ultimo digito
    }while( numero > 0 );//fin del do-while

    return 0;
}