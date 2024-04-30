#include <iostream>

using namespace std;

void imprimirNum();

int main(int argc, char const *argv[])
{
    imprimirNum();
    return 0;
}

void imprimirNum()
{
    for(int i = 99; i >= 70; i--)
    {
        cout << i << endl;
    }
}
