#include <iostream>
using namespace std;

int main()
{
    double d = 2.5;
    cout << "the address is" << &d << endl;
    double *p;
    p = &d;
    cout << "the valeus is " << d << endl;
    cout << "the valeu is " << *p << endl;
    // implementing array with the pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *u;
    u = &arr[0];
    // or we can write as u=arr;
    cout << u << endl;
    cout << u + 1 << endl;
    cout << u + 2 << endl;
    cout << u + 3 << endl;
    cout << u + 4 << endl;

    cout << *u << endl;
    cout << *(u + 1) << endl;
    cout << *(u + 2) << endl;
    cout << *(u + 3) << endl;
    cout << *(u + 4) << endl;
    cout << "this is who my friend" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {

        cout << "the value is" << *(u + i) << endl;
    }

    return 0;
}