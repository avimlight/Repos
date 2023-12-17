#include <iostream>
using namespace std;
void fg(int a, int b = 3)
{
    cout << a + b << endl;
}
// always remmeber if u consider a  default parameter in ur fn see it must be at right side of ur fn such that no other values should be present and on the rightmost side with tthe assignment operator assigned to it and th value
int main()
{
    fg(3);
    return 0;
}