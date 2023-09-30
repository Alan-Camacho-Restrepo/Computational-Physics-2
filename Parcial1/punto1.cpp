/*
Imagina un circulo de radio r que tiene un cuadrado circunscrito (un cuadrado dentro de un circulo).

(a) Calcule en C++ el valor de el area entre el cuadrado y el circulo
(b) Calcule el perimetro que envuelve al area

*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // Todo los valores estaran en unidades arbitrarias u.a

    float radioCirculo, ladoCuadrado, radioCuadrado, areaCirculo, areaCuadrado, areaEntreCuadCirc, perimetro;
    const double PI = 3.141592653589793238463;

    cout << "Ingresa el radio del circulo al cual se le va a meter un cuadrado: ";
    cin >> radioCirculo;

    cout << "Ingresa el lado del cuadrado que estara dentro del circulo en su centro, de tal manera que pueda entrar dentro del circulo de radio: " << radioCirculo << endl;
    cin >> ladoCuadrado;

    // Condicion para que el cuadrado si pueda entrar en el circulo
    radioCuadrado = ladoCuadrado / sqrt(2);

    float ladoMaximo = sqrt(2) * radioCirculo;

    // Ciclo hasta que el usuario ingrese un valor adecuado para el lado del cuadrado
    while (radioCuadrado > radioCirculo){
        cout << "Por favor ingresa el lado de cuadrado de tal manera que pueda entrar en el circulo" << endl;
        cout << "El lado del cuadrado debe ser menor o igual a: " << ladoMaximo << endl;

        cout << "Ingresa el lado del cuadrado: ";
        cin >> ladoCuadrado;

        radioCuadrado = ladoCuadrado / sqrt(2);
    }

    areaCirculo = PI * radioCirculo * radioCirculo;

    areaCuadrado = ladoCuadrado * ladoCuadrado;

    // El area comprendida entre el circulo y el cuadrado es simplemente la resta de sus areas (el area del circulo es mayor)
    areaEntreCuadCirc = areaCirculo - areaCuadrado;

    cout << "El valor de el area entre el cuadrado y el circulo es: " << areaEntreCuadCirc << endl;

    // El perimetro que envuelve el area, es simplemente el perimetro del circulo
    perimetro = 2 * PI * radioCirculo;

    cout << "El perimetro que envuelve al area es de: " << perimetro << endl;

    return 0;
}
