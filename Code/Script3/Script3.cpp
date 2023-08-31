#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float weight, height, age;
    char gender, stopApp;

    do
    {
        cout << "What is your weight?" << endl;
        cin >> weight;
        cout << "What is your height?" << endl;
        cin >> height;
        cout << "What is your age?" << endl;
        cin >> age;
        cout << "What is your gender?" << endl;
        cin >> gender;

        switch (gender)
        {
        case 'M':
        case 'm':
            cout << endl << weight, height, age;
            break;
        case 'F':
        case 'f':
            cout << endl << weight, height, age;
            break;
        default:
            cout << "What is your gender?";
        }

        cout << "Do you want to continue? (Y/N)" << endl;
        cin >> stopApp;

    } while (stopApp == 'Y');

	return 0;
}