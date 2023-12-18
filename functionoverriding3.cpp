#include <iostream>
using namespace std;
class Box
{
    int length;

public:
    Box(int length)
    {
        this->length = length;
    }
    friend int leg(Box b);
    // friend fn even though outside the class we can access outside class  should write friend thing before int
};
int leg(Box b)
{
    return b.length;
}
int main()
{
    Box b(20);
    cout << "the length is" << leg(b) << endl;

    return 0;
}