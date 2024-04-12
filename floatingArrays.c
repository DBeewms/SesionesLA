#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[5];

    numbers[0] = 2.543;
    numbers[1] = 55.543;
    numbers[2] = 67.4536;
    numbers[3] = 98.456;
    numbers[4] = 135.256465;

    printf("El elemento #1 del arreglo es %.2f\n", numbers[0]);
    printf("El elemento #2 del arreglo es %.2f\n", numbers[1]);
    printf("El elemento #3 del arreglo es %.2f\n", numbers[2]);
    printf("El elemento #4 del arreglo es %.2f\n", numbers[3]);
    printf("El elemento #5 del arreglo es %.2f\n", numbers[4]);

    return 0;
}