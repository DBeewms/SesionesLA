#include <stdio.h>

int main(int argc, char const *argv[])
{
    int km;
    printf("Ingresa kilometros para convertirlos a metros...\n");
    scanf("%i", &km);
    printf("Metros: %i", conversion(km));
    return 0;
}

int conversion(int km)
{
    return km*1000;
}
