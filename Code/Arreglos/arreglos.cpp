#include <iostream>

using namespace std;


float productoPunto()
{   
    float x[3] = {1, 2, 3};

    float y[3] = {1, 1, 1};
    
    float sum;
    
    for(int j=0; j < 3; j++)
    {
        sum += x[j] * y[j];
    }

    return sum;
}


int main()
{
    
    float sum = productoPunto();

    cout << sum << endl;

    // float valor;
    // float C[4];  // Crear array
 
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Ingresa un valor para poner en el array " << endl;
    //     cin >> valor;
    //     C[i] = valor;
    // }

    // for(int i = 0; i < 4; i++)
    // {
    //     cout << "Elemento " << i << " de la lista: " << C[i]  << endl; 
    // }

    return 0;
}