#include <iostream>

using namespace std;

void imprimirArreglo(const int[2][3]);
void multiplicacionMatrices(int a[][2], int b[][2]);

int main()
{

    int a[2][2] = {{0,1},{1,0}};
    int b[2][2] = {{0,1},{1,0}};

    multiplicacionMatrices(a, b);

    // int arreglo1[2][3] = { {1, 2, 3}, {4, 5, 6}};
    // int arreglo2[2][3] = {1, 2, 3, 4, 5};
    // int arreglo3[2][3] = { {1, 2}, {4}};

    // cout << "Los valores en arreglo1 por fila: " << endl;
    // imprimirArreglo(arreglo1);

    // cout << "Los valores en arreglo2 por fila: " << endl;
    // imprimirArreglo(arreglo2);

    // cout << "Los valores en arreglo3 por fila: " << endl;
    // imprimirArreglo(arreglo3);

    return 0;
}

void imprimirArreglo(const int a[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}


void multiplicacionMatrices(int a[][2], int b[][2])
{
    int c[2][2] = {{0 , 0}, {0 ,0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j=0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) cout << c[i][j] << " ";
        cout << endl;
    }
    
}


