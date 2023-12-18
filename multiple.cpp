#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "this is sthe a class" << endl;
    }
};
class B
{
public:
    void fd()
    {
        cout << "this is the b class" << endl;
    }
};
class C : public A, public B
{
public:
    void cd()
    {
        cout << "this is the c classs" << endl;
    }
};

int main()
{
    C g;
    g.fun();
    g.fd();
    g.cd();
    // thsi si scalled as multiple inheritance
    return 0;
}