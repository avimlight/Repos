#include <iostream>
using namespace std;
void fn(int x)
{
    x = 50;
    cout << "the value is"
         << x << endl;
}
int main()
{
    int x = 60;
    fn(x);
    cout << "the value of the x is" << x << endl;
    // we think that here will get changed output  but in this case its not u wont get changed op but what u hardcoded value as 60 u will get after function dec so its called as call by value type
    return 0;
}