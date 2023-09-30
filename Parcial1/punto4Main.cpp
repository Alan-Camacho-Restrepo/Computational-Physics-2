#include <iostream>
#include "punto4.h"

using namespace std;

    // Este en un script que permnite realizar la operacion entre dos numeros ingresados por el usuario
    // a partir de una clase llamada Calculadora, la cual fue declarada en el heade punto4.h
    // y fue inicializada con su constructor en punto4Inicializador.cpp
    // por tanto para correr este script de main, es necesario correr primero el .cpp del inicializador

int main() {
    float num1, num2;
    char operacion;

    cout << "Ingrese la operacion que quiere hacer entre dos numeros (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Creando un objeto de la clase
    Calculadora miCalculadora(num1, num2);

    switch (operacion) {
        case '+':
            cout << "Resultado: " << miCalculadora.suma() << endl;
            break;
        case '-':
            cout << "Resultado: " << miCalculadora.resta() << endl;
            break;
        case '*':
            cout << "Resultado: " << miCalculadora.multiplicacion() << endl;
            break;
        case '/':
            cout << "Resultado: " << miCalculadora.division() << endl;
            break;
        default:
            cout << "Operación no valida." << endl;
    }
        
    return 0;
}
