#include <iostream>

using namespace std;

// Declarar la clase
class Rectangulo 
{
private:
	float Altura, Base;

public:
	Rectangulo(float, float);
	~Rectangulo();
	void Area();
	void Perimetro();
};


// Inicializar la clase
Rectangulo::Rectangulo(float base, float altura) 
{
	Base = base;
	Altura = altura;
}

Rectangulo::~Rectangulo(){}

void Rectangulo::Area()
{
	float area;
	area = Base * Altura;
	cout << "El area del rectangulo es: " << area << endl;
}

void Rectangulo::Perimetro()
{
	float perimetro;
	perimetro = 2 * Base + 2 * Altura;
	cout << "El perimetro del rectangulo es: " << perimetro << endl;
}
