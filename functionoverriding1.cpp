#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "default constructor of a" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "default cons of class b" << endl;
    }
};
int main()
{
    // A obj;//only a thing is running
    B obj;
    // op u will get is class a constructor will run then class b will run
    return 0;
}