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
    void fn()
    {
        x = 4;
        y = 5;
        z = 6;
    }
};
class B : public A
{
    void func()
    {
        // private only in the class  x = 2;
        y = 3;
        z = 4;
    }
};

int main()
{
    A obj;
    // obj.x = 1;
    // obj.y = 1;
    obj.z = 1;
    return 0;
}