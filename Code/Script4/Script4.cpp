/*This first task is about :
		An user's input can choice between: Square, circle, triangle or hexagon
	 and the ouput will be its area an perimeter. 
*/

#include <iostream>

#include"areas.h"

using namespace std;

int main() {
	string figure; 
	cout << "Which of figures you wanna know its area and perimeter? Square (s), Circle (c), Triangle (t) or Hexagon (h)" << endl;
	cout << "Enter the letter associated to each figure: ";
	cin >> figure;

	figureArea(figure);
	
	return 0;
}
