/*

Calcular en C++ la funci´on Coseno con la ayuda de las series de Taylor y comprobarlo imprimiendo en
el mismo cout el valor del coseno.math (el usuario debe escoger el nivel de presici´on que quiere en su
resultado)

*/


#include <iostream>
#include <cmath>

using namespace std;

// Declarar funciones
double factorial(int);
double calcularCoseno(double, int);


int main() {
    double x;
    int presicion;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el nivel de presicion: ";
    cin >> presicion;

    double resultadoCoseno = calcularCoseno(x, presicion);
    double resultadoCosenoMath = cos(x);

    cout << "Coseno calculado con la serie de Taylor: " << resultadoCoseno << endl;
    cout << "Coseno calculado con cmath: " << resultadoCosenoMath << endl;

    return 0;
}


// Funcion para calcular el factorial
double factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Funcion para calcular el coseno con series de taylor, con precision entrada por el usuario
double calcularCoseno(double x, int presicion) {

     // Primer término de la serie de Taylor, correspondiente a i=0
    double resultado = 1.0; 

    for (int i = 1; i <= presicion; i++) {
        // Serie de taylor para el coseno
        double termino = pow(-1, i) * pow(x, 2 * i) / (factorial(2 * i)); 
        resultado += termino; 
    }

    return resultado;
}
