#include <stdio.h>

//Prototipo de función
int suma(int num1, int num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1);
    printf("Dime el segundo valor: ");
    scanf("%d", &num2);
    printf("Suma: ");
    printf("%d", suma(num1, num2));
    return 0;
}

int suma(int num1, int num2)
{
    return num1 + num2;
}
