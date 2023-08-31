// Task2: return a sigmoid function of a value that input the user

#include <iostream>
#include <cmath>

using namespace std;

float sigmoidFunction(float);

int main() {

	float num; 

	cout << "Enter a number to calculate its sigmoide function: ";
	cin >> num; 

	float result = sigmoidFunction(num);

	cout << "sigmoide(" << num << ") = " << result << endl;

	return 0;
}


// Sigmoide function
float sigmoidFunction(float x) {
	float sigmoid = 1 / (1 + exp(-x));
	return sigmoid;
}
