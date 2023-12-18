#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {

        cout << "in class a" << endl;
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << "in class b" << endl;
    }
};

int main()
{
    B obj;
    obj.A::fun(); // thisi wil give me the op  from the first class
    obj.fun();    // now it s a object of class b so ill get op from b class
    return 0;
}