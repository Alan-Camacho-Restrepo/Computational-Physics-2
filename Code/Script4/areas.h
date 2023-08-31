#include<iostream>

using namespace std; 

int areaSquare(){
        float sideSquare;
        cout << "Your choice was the square!" << endl;
        cout << "Enter the length of the side in meters [m]: ";
        cin >> sideSquare;
        cout << "The square's area is: " << sideSquare * sideSquare << " m^2" << endl;
        cout << "And its perimeter is: " << 4 * sideSquare << " m" << endl;

        return 0;
}

int areaCircle(){
        float radiusCircle;
        const float PI = 3.1416;
        cout << "Your choice was the circle!" << endl;
        cout << "Enter the radius of the circle in meters [m]: ";
        cin >> radiusCircle;
        cout << "The circle's area is: " << PI * radiusCircle * radiusCircle << " m^2" << endl;
        cout << "And its perimeter is: " << 2 * PI * radiusCircle << " m" << endl;

        return 0;
}

int areaTriangle(){
        float baseTriangle, heightTriangle;
        cout << "Your choice was the triangle!" << endl;
        cout << "The calculation will be in issoceles triangles" << endl;
        cout << "Enter the base of the triangle in meters [m]: ";
        cin >> baseTriangle;
        cout << "Enter the height of the triangle in meters [m]: ";
        cin >> heightTriangle;
        cout << "The circle's area is: " << baseTriangle * heightTriangle / 2 << " m^2" << endl;
        cout << "And its perimeter is: " << baseTriangle * 3 << " m" << endl;

        return 0;
}

int areaHexagon(){
        float sideHexagon, apHexagon;
        cout << "Your choice was the hexagon!" << endl;
        cout << "Enter the side length of the hexagon in meters [m]: ";
        cin >> sideHexagon;
        cout << "Enter the apothem of the hexagon in meters [m]: ";
        cin >> apHexagon;
        cout << "The hexagon's area is: " << 6 * sideHexagon * apHexagon / 2 << " m^2" << endl;
        cout << "And its perimeter is: " << 6 * sideHexagon << " m" << endl;

        return 0;
}

int figureArea(string figure){
    if (figure == "s") {
        areaSquare();
    }

    else if (figure == "c") {
        areaCircle();
    }

    else if (figure == "t") {
        areaTriangle();
    }

    else if (figure == "h") {
        areaHexagon();
    }

    else{
        cout << "ERROR: Unknown, Enter the letter associated to each figure" <<endl;
    }

    return 0;
}