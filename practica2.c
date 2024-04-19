/*2.Escriba el programa que realice las operaciones básicas 
(suma, resta, multiplicación y división), a partir de dos números enteros desconocidos. 
Utilizar una función diferente por cada operación.  Utilizar función sin parámetros.*/

#include <stdio.h>

int sumar();
int restar();
int multiplicar();
int dividir();


int main(int argc, char const *argv[])
{
    int opcion;
    printf("Bienvenido...\n");
    printf("Opcion 1: Sumar\n");
    printf("Opcion 2: Restar\n");
    printf("Opcion 3: Multiplicar\n");
    printf("Opcion 4: Dividir\n");
    printf("Opcion 5: Salir\n");

    printf("Elige una opcion...\n");
    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma es: %i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La diferencia es: %i\n", restar());
    }
    else if (opcion == 3)
    {
        printf("El producto es: %i\n", multiplicar());
    }
    else if (opcion == 4)
    {
        printf("La division es: %i\n", dividir());
    }
    else if(opcion == 5)
    {
        printf("Adios");
    }
    else
    {
        printf("Opcion invalida, vuelve a intentarlo...\n");
    }
    if(opcion != 5)
    {
        main(0,0);
    }
    return 0;
}

int sumar(){
    int numero1, numero2;
    printf("Dime dos numeros...\n");
    printf("Primer numero...\n");
    scanf("%i", &numero1);
    printf("Segundo numero...\n");
    scanf("%i", &numero2);
    return numero1+numero2;
}

int restar(){
    int numero1, numero2;
    printf("Dime dos numeros...");
    printf("Primer numero...");
    scanf("%i", &numero1);
    printf("Segundo numero...");
    scanf("%i", &numero2);
    return numero1-numero2;
}

int multiplicar(){
    int numero1, numero2;
    printf("Dime dos numeros...");
    printf("Primer numero...");
    scanf("%i", &numero1);
    printf("Segundo numero...");
    scanf("%i", &numero2);
    return numero1*numero2;
}

int dividir(){
    int numero1, numero2;
    printf("Dime dos numeros...");
    printf("Primer numero...");
    scanf("%i", &numero1);
    printf("Segundo numero...");
    scanf("%i", &numero2);
    if(numero2>0) return numero1/numero2;
    return 0;
}
