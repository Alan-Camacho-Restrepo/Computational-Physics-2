#include <iostream>
using namespace std;

int main() {

	string figure;
	const float PI = 3.1416;
	float sideSquare, radiusCircle, baseTriangle, heightTriangle, sideHexagon, apHexagon;


	cout << "Which of figures you wanna know its area and perimeter? Square (s), Circle (c), Triangle (t) or Hexagon (h)" << endl;
	cout << "Enter the letter associated to each figure: ";
	cin >> figure;

	if (figure == "s") {
		cout << "Your choice was the square!" << endl;
		cout << "Enter the length of the side in meters [m]: ";
		cin >> sideSquare;
		cout << "The square's area is: " << sideSquare * sideSquare << " m^2" << endl;
		cout << "And its perimeter is: " << 4 * sideSquare << " m" << endl;
	}

	else if (figure == "c") {
		cout << "Your choice was the circle!" << endl;
		cout << "Enter the radius of the circle in meters [m]: ";
		cin >> radiusCircle;
		cout << "The circle's area is: " << PI * radiusCircle * radiusCircle << " m^2" << endl;
		cout << "And its perimeter is: " << 2 * PI * radiusCircle << " m" << endl;
	}

	else if (figure == "t") {
		cout << "Your choice was the triangle!" << endl;
		cout << "The calculation will be in issoceles triangles" << endl;
		cout << "Enter the base of the triangle in meters [m]: ";
		cin >> baseTriangle;
		cout << "Enter the height of the triangle in meters [m]: ";
		cin >> heightTriangle;
		cout << "The circle's area is: " << baseTriangle * heightTriangle / 2 << " m^2" << endl;
		cout << "And its perimeter is: " << baseTriangle * 3 << " m" << endl;
	}

	else if (figure == "h") {
		cout << "Your choice was the hexagon!" << endl;
		cout << "Enter the side length of the hexagon in meters [m]: ";
		cin >> sideHexagon;
		cout << "Enter the apothem of the hexagon in meters [m]: ";
		cin >> apHexagon;
		cout << "The hexagon's area is: " << 6 * sideHexagon * apHexagon / 2 << " m^2" << endl;
		cout << "And its perimeter is: " << 6 * sideHexagon << " m" << endl;
	}

	return 0;
}
