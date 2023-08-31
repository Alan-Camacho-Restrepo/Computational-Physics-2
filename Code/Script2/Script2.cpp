#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int num;

	cout << "Ingrese hasta que numero entero quiere contar: ";
	cin >> num;

	int i = 0;

	while (i <= num) {
		cout << i++ << endl;;
	}

	/*
	float num;

	cout << "Ingrese un numero: ";
	cin >> num;

	cout << num << "^2 = " << pow(num, 2) << endl;

	cout << "sqrt(" << num << ") = " << sqrt(num) << endl;

	cout << "exp(" << num << ") = " << exp(num) << endl;
	*/



	/*
	int num, factorial = 1;

	cout << "Ingrese un numero entero para calcular su factorial: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		factorial =  factorial * i;
	}

	cout << num << "! = " << factorial;
	*/


	/*
	int con;
	cout << "Ingresa el valor incial del contador: ";
	cin >> con;

	int i = con;


	cout << i << endl;

	i++;
	cout << i << endl;

	++i;
	cout << i << endl;

	i = i + 100;
	cout << i << endl;

	cout << i++ << endl;

	cout << i << endl;
	*/

	/*
	++i” is known as the pre-increment operator, which increments the value of 'i' immediately and returns the incremented value.
	On the other hand, “i++” is known as the post-increment operator, which increments the value of 'i' but returns the original
	value that 'i' held before being incremented.
	*/


	/*
	int num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	if (num1 % num2 == 0) cout << "The divizion is exact";

	else cout << "The divizion is not exact";
	*/

	return 0;
}