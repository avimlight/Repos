#include <iostream>
using namespace std;

int main()
{
    //& means storing the adrress of thye variable
    // int x = 20;
    // int *p = &x;
    // cout << x << endl;
    // cout << p << endl;
    // cout << &x << endl;
    // cout << *p << endl;
    int x = 34;
    int *p;
    p = &x;
    cout << "the value is" << x << endl;
    cout << "the address is" << &x << endl;
    cout << "the value is" << *p << endl;
    cout << "the address is" << p << endl;
    return 0;
}