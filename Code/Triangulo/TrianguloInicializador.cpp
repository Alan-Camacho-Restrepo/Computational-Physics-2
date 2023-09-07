#include <iostream>
#include "Triangulo.h"

// Inicializar la clase
Triangulo::Triangulo(float lado1, float lado2, float base)
{
	Lado1 = lado1;
	Lado2 = lado2;
	Base = base;
}

void Triangulo::Area()
{
	if ((Lado1 == Lado2) && (Lado1 == Base))
	{
		AreaEquilatero(Lado1, Lado2, Base);
	}

	else if ((Lado1 == Lado2) && (Lado1 != Base)) 
	{
		AreaIsosceles(Lado1, Lado2, Base);
	}

	else if ((Lado1 != Lado2) && (Lado1 != Base) && (Lado2 != Base))
	{
		AreaEscaleno(Lado1, Lado2, Base);
	}
}

void Triangulo::Perimetro()
{
	if ((Lado1 == Lado2) && (Lado1 == Base))
	{
		PerimetroEquilatero(Lado1, Lado2, Base);
	}

	else if ((Lado1 == Lado2) && (Lado1 != Base))
	{
		PerimetroIsosceles(Lado1, Lado2, Base);
	}

	else if ((Lado1 != Lado2) && (Lado1 != Base) && (Lado2 != Base))
	{
		PerimetroEscaleno(Lado1, Lado2, Base);
	}

}

// Funciones
void AreaIsosceles(float Lado1, float Lado2, float Base)
{
	float area;
	float altura;

	altura = sqrt(Lado1 * Lado1 - (Base * Base) / 4);
	area = Base * altura / 2;

	cout << "El area del triangulo isosceles de lado " << Lado1 << " y base " << Base << " es: " << area  << endl;
}

void PerimetroIsosceles(float Lado1, float Lado2, float Base)
{
	float perimetro;
	perimetro = 2 * Lado1 + Base;
	cout << "Su perimetro es:  " << perimetro << endl;
}

void AreaEquilatero(float Lado1, float Lado2, float Base)
{
	float area;

	area = sqrt(3) * Lado1 * Lado1 / 4;

	cout << "El area del triangulo equilatero de lados " << Lado1 << " es: " << area << endl;
}

void PerimetroEquilatero(float Lado1, float Lado2, float Base)
{
	float perimetro;
	perimetro = 3 * Lado1;
	cout << "Su perimetro es:  " << perimetro << endl;
}

void AreaEscaleno(float Lado1, float Lado2, float Base)
{
	float area;
    float altura;

    altura = sqrt(Lado1 * Lado1 - (Base * Base) / 4); // Esta malo, aun falta
	area = Base * altura  / 2;

	cout << "El area del triangulo escaleno de lados " << Lado1 << ", " << Lado2 << " y " << Base << " es: " << area << endl;
}

void PerimetroEscaleno(float Lado1, float Lado2, float Base)
{
	float perimetro;
	perimetro = Lado1 + Lado2 + Base;
	cout << "Su perimetro es:  " << perimetro << endl;
}