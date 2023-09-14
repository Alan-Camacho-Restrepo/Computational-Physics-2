#include <iostream>
#include <array>

using namespace std;

// Diferenciar entre static y int variable

// Static es una variable global
// el int es una variable locales
// el const nunca cambia

void Ejemplo(int num);

int main()
{

    Ejemplo(1);
    Ejemplo(2);
    Ejemplo(3);

    return 0;
}

void Ejemplo(int num)
{
    static int var1 = 10;
    int var2 = 10;
    const int var3 = 10;

    cout << "El valor static es: " << var1 << endl;
    cout << "El valor int es: " << var2 << endl;
    cout << "El valor const es: " << var3 << endl;

    ++var1;
    ++var2;
    // ++var3;
}
