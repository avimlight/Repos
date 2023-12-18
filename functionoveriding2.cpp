#include <iostream>
using namespace std;
class A
{
    int y;

public:
    A()
    {
        cout << "default constructor of a" << endl;
    }
    A(int y)
    {
        this->y = y;
        cout << "the value of y is" << y << endl;
    }
};
class B : public A
{
public:
    int x;
    B()
    {
        cout << "default cons of class b" << endl;
    }
    B(int x)
    {
        this->x = x;
        cout << "the value of x is" << x << endl;
    }
};
int main()
{
    // A obj;//only a thing is running
    // B obj; // will only run first a thing then b thing next it will run only b default thing
    // op u will get is class a constructor will run then class b will run
    B obj(45);
    // ai s default will run and b is parametrized constructor only one wil run from each class my friend
    return 0;
}