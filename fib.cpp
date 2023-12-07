#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int fib = 0;
    for (int i = 1; i <= n; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }
    cout << fib << endl;

    return 0;
}