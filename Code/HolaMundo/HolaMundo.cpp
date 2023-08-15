
#include <iostream>
using namespace std;

int main()
{
    int a, b, r;
    string result;
    const float PI = 3.1416;

    /*cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;*/

    // result = (a == b) ? "equal" : "not equal";

    /*if (a == b)
    {
        cout << "equal";
    }

    else if (a > b) cout << a << " is greater than " << b;

    else if (a < b) cout << a << " is less than " << b;

    else if (a <= b) cout << a << "is less and equals than" << b;

    else if (a >= b) cout << a << "is greater and equals than" << b;*/

    cout << "Enter the circule's radio: ";
    cin >> r;

    cout << "The circule's area is: " << PI * r * r << endl;;

    cout << "The circule's perimeter: " << 2 * PI * r;




    return 0;
}

