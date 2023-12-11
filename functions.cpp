#include <iostream>
using namespace std;
void hj()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "this is the function basic type" << endl;
    }
}
int gh(int a, int b)
{
    return a + b;
}
int main()
{
    hj();
    int gy = gh(1, 2);
    cout << "the sum is" << gy << endl;
    return 0;
}