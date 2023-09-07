#include <iostream>
#include "Task3.h"


int main()
{
	// Pedir al usuario
	float lado1, lado2, base;
	cout << "Valor del lado 1? " << endl;
	cin >> lado1;
	cout << "Valor del lado 2? " << endl;
	cin >> lado2;
	cout << "Valor de la base? " << endl;
	cin >> base;

	// Instanziar la clase
	Triangulo tr(lado1, lado2, base);
	tr.Area();
	tr.Perimetro();

	return 0;
}

