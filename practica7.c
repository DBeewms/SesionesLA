#include <stdio.h>

float calularArea(int base, int altura);
float calularPerimetro(int base, int altura);


int main(int argc, char const *argv[])
{
    float base, altura;

    printf("Dime la base del rectangulo: ");
    scanf("%f", &base);
    printf("Dime la altura del rectangulo: ");
    scanf("%f", &altura);
   
    printf("El area es: %.2f\n", calularArea(base, altura));
    printf("El perimetro es: %.2f\n", calularPerimetro2(base, altura));

    return 0;
}

float calularArea(int base, int altura)
{
    return base*altura;
}

float calularPerimetro(int base, int altura)
{
    return 2*(base+altura);
}