#include <iostream>
#include<cmath>

using namespace std;

// Declarar funciones
void AreaIsosceles(float, float, float);
void PerimetroIsosceles(float, float, float);

void AreaEquilatero(float, float, float);
void PerimetroEquilatero(float, float, float);

void AreaEscaleno(float, float, float);
void PerimetroEscaleno(float, float, float);

// Declarar la clase
class Triangulo
{
private:
	float Lado1, Lado2, Base;

public:
	Triangulo(float, float, float);

	void Area();
	void Perimetro();
};