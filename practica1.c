/*1.Escribe un programa que permita convertir temperaturas Fahrenheit 
a grados Celsius.  Utilice una función con parámetros.*/

#include <stdio.h>

float convertirCelsius(int gradosF);

int main(int argc, char const *argv[])
{
    int temperaturaF;
    float celsius;

    printf("Dime la temperatura en grados Fahrenheit y la convertire a Celsius: ");
    scanf("%i", &temperaturaF);

    celsius = convertirCelsius(temperaturaF);

    printf("Temperatura en grados Celsius: %.2f", celsius);
    
    return 0;
}

float convertirCelsius(int gradosF)
{
    return (gradosF-32)/1.8;
}