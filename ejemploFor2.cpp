#include <iostream>

using namespace std;

#define MAX 100
int numeros[MAX];
int pos = 0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cantidad;
    int numero;
    cout << "Dime cuantos numeros desea almacenar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Dime un #: ";
        cin >> numero;
        agregar(numero);
    }
    mostrar();
    return 0;
}

void agregar(int num)
{
    numeros[pos] = num;
    pos++;
}

void mostrar()
{
    for(int i = 0; i < pos; i++)
    {
        cout << numeros[i] << endl;
    }
}