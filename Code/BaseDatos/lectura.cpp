#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float energyParticle(float, float, float, float);

int main()
{
    fstream file;
    file.open("muones-VENUS-GHEISHA-hepevt.txt", ios::in);  // abrir un file, archivo de entrada

    float var1, var2, Id, var3, var4, Px, Py, Pz, masa;

    int k = 0;
    while(!file.eof())  // leer el archivo hasta el final, linea por linea
    {
        file >> var1 >> var2 >> Id >> var3 >> var4 >> Px >> Py >> Pz >> masa;

        cout << energyParticle(Px, Py, Pz, masa) << endl; 
    }

    file.close();

    return 0;
}

float energyParticle(float Px, float Py, float Pz, float masa)
{
    float pp = Px * Px + Py * Py + Pz * Pz;
    float e = sqrt(pp + masa*masa);

    return e;
}