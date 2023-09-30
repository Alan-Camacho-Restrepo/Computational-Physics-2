/*

Calcular en C++ el valor del area y el perimetro de un triangulo (rectangulo, isosceles y equilatero) de tal forma que el
usuario solo va a ingresar el valor de la base y la altura.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float base, altura, areaRect, perimRect, areaIsos, perimIsos, areaEquil, perimEquil;

    cout << "Ingresa la base del triangulo: ";
    cin >> base;

    cout << "Ingresa la altura del triangulo: ";
    cin >> altura;

    // Caclular con pitagoras el lado o hipotenusa del triangulo rectangulo
    float ladoRect = sqrt(base*base + altura*altura);
    perimRect = ladoRect + base + altura;
    areaRect = base * altura / 2;

    cout << "El area de un triangulo rectangulo de base " << base << " y altura " << altura << " es de: " << areaRect << endl;
    cout << "y su perimetro es de: " << perimRect << endl;

    // Con pitagoras calcular el lado del triangulo isosceles
    float ladoIsos = sqrt((base/2)*(base/2) + altura*altura);
    perimIsos = base + 2 * ladoIsos;
    areaIsos = base * altura / 2;

    cout << "El area de un triangulo Isosceles de base " << base << " y altura " << altura << " es de: " << areaIsos << endl;
    cout << "y su perimetro es de: " << perimIsos << endl;

    // Para el traingulo equilatero, no se puede ingresar cualquier valor base y altura
    // ya que existe una ligadura entre ellas
    // Por tanto se imprime el area del traingulo equilatero correspondiente a la base
    // Y correspondiente a la alutra ingresadas

    // Valor de la altura que debe de tener el triangulo dada la base
    float alturaCorregida = base * sqrt(3) / 2;

    areaEquil = base * alturaCorregida / 2;
    perimEquil = 3 * base;

    cout << "La altura de un triangulo equilatero de base " << base << " es de: " << alturaCorregida << endl;
    cout << "El area de un triangulo equilatero de base " << base << " y altura " << alturaCorregida << " es de: " << areaEquil << endl;
    cout << "y su perimetro es de: " << perimEquil << endl;

    // Valor de la base que debe de tener el triangulo dada la altura
    float baseCorregida = altura * 2 / sqrt(3);

    areaEquil = baseCorregida * altura / 2;
    perimEquil = 3 * baseCorregida;

    cout << "La base de un triangulo equilatero de altura " << altura << " es de: " << baseCorregida << endl;
    cout << "El area de un triangulo equilatero de base " << baseCorregida << " y altura " << altura << " es de: " << areaEquil << endl;
    cout << "y su perimetro es de: " << perimEquil << endl;

    return 0;
}