#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *p1 = &x;
    int **p2;
    p2 = &p1;
    cout << "the value of the x is" << x << endl;
    cout << "the address of the x is" << &x << endl;
    cout << "the value the x is" << *p1 << endl;
    cout << "the address of the x is" << p1 << endl;
    cout << "the address of p1 is" << &p1 << endl;
    cout << "the address of p2 is" << &p2 << endl;
    cout << "the adrress of p1 is" << p2 << endl;
    cout << "the value of p1 is" << **p2 << endl;

    return 0;
}