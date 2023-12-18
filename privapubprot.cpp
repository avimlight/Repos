#include <iostream>
using namespace std;
class A
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class B : public A
{
    void access()
    {
        // x=4; will give u the error
        y = 5;
        z = 6;
    }
};

class C : private A
{
    // x is private y is private z is private
};
class D : protected A
{
    // x is private y is protected z is protected
};

int main()
{

    C obj;
    obj.x; // u will get error because ur visisbility mode is private
    return 0;
}