#include <iostream>
using namespace std;
void rt(int &x)
{
    x = 30;
}
int main()
{
    int x = 20;
    rt(x);
    cout << "the value of the x  is " << x << endl;
    // now see this is  call by reference here the value is changed so we use call by reference concept here before call by value concpet of chnging wasnt working so we added & in the fn implemnation now the changed value is available to u
    return 0;
}