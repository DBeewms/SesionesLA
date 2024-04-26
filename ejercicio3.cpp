// 3.	Escriba un programa para crear un procedimiento 
// que reciba un valor como argumento y lo cambie de signo. 

#include <iostream>

using namespace std;

void cambiarSigno(int num);

int main(int argc, char const *argv[])
{
    int num;
    cout << "Dime un numero y lo cambiare de signo: " << endl;
    cin >> num;

    cambiarSigno(num);

    return 0;
}

void cambiarSigno(int num)
{
    if (num > 0 || num < 0)
    {
        num = num * (-1);
    }
    else
    {
        num = 0;
    }

    cout << num;
}
