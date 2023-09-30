#include "punto4.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora(float a, float b){
    num1 = a;
    num2 = b;
} 

Calculadora::~Calculadora(){}

float Calculadora::suma() {
    return num1 + num2;
}

float Calculadora::resta() {
    return num1 - num2;
}

float Calculadora::multiplicacion() {
    return num1 * num2;
}

float Calculadora::division() {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0.0;
    }
}