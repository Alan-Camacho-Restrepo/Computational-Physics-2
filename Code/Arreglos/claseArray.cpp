#include <iostream>
#include <array>

// using namespace std;

/*

    std::cout 

    std::cin

*/

void inicArregloStatic(void);

int main()
{

    

    // Declarar el vector
    // array<int, 10> myArray; // Crear array de tamaño 10 llamado myArray

    // for (size_t i{0}; i < myArray.size(); i++)
    // {
    //     myArray[i] = 0;
    // }
    
    // for (int i = 0; i < myArray.size(); i++)
    // {
    //     cout << myArray[i] << endl;
    // }

    return 0;
}

void inicArregloStatic(void)
{
    static int arreglo1[3];
    std::cout << "\nValores al entrar en inicArregloStatic:\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "arreglo1[" << i << "] = " << arreglo1[i] << " ";
    }

    std::cout << "\nValores al salir de inicArregloStatic:\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "arreglo1[" << i << "] = " << (arreglo1[i] += 5) << " ";
    }    
}