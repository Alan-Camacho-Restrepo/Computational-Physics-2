#include <iostream>
#include"Script6.h"
using namespace std;

int main()
{
	// Pedir al usuario
	float base, altura;
	cout << "Valor de la altura? " << endl;
	cin >> altura;
	cout << "Valor de la base? " << endl;
	cin >> base;

	// Instanziar la clase
	Rectangulo rect(base, altura);
	rect.Area();
	rect.Perimetro();

	return 0;
}