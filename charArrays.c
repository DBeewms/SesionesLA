#include <stdio.h>

int main(int argc, char const *argv[])
{
    double numbers[10];
    double sum = 0;

    printf("Sumare 10 numeros...\n");

    for(int i = 0; i < 9; i++)
    {
        printf("Dime un numero para sumarlo: ");
        scanf("%f", numbers[i]);
    }
    
    for(int i = 0; i < 9; i++)
    {
        sum += numbers[i];
    }

   printf("La sumatoria es: %.2f", sum);

    return 0;
}