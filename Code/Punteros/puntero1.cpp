#include <iostream>

using namespace std;

int main()
{
    int v[5] = {1, 2, 3};
    int *vPtr = v;
    // int *vPtr = &v[0];

    cout << vPtr << endl;

    vPtr += 2;

    cout << vPtr << endl;





    // int a = 3;
    // cout << &a << endl;

    // int *aP;
    // cout << &aP << endl;

    // aP = &a;
    // cout << &aP << endl;
    // cout << *aP << endl;

    // cout << a << endl;

    return 0;
}