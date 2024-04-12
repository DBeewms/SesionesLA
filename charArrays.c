#include <stdio.h>

int main(int argc, char const *argv[])
{
    char numbers[5];

    numbers[0] = 'a';
    numbers[1] = 'e';
    numbers[2] = 'i';
    numbers[3] = 'o';
    numbers[4] = 'u';

    printf("El elemento #1 del arreglo es %c\n", numbers[0]);
    printf("El elemento #2 del arreglo es %c\n", numbers[1]);
    printf("El elemento #3 del arreglo es %c\n", numbers[2]);
    printf("El elemento #4 del arreglo es %c\n", numbers[3]);
    printf("El elemento #5 del arreglo es %c\n", numbers[4]);

    return 0;
}