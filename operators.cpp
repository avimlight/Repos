#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 5 operators in arithmetic operators
    int a = 1;
    int b = 2;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    double c = 5 / 2;
    cout << c << endl;
    // increment and decrement operators there are called as unary operators
    // we can classify into 2 first  is postfix and prefix

    int d = 2;
    cout << d++ << endl;
    cout << d << endl;
    int fr = 7;
    fr++;
    ++fr;
    cout << fr << endl;
    int p = 8;
    int q = p--;
    cout << p << endl;
    cout << q << endl;
    cout << 2 + 5 * 3 << endl;
    cout << (2 + 5) * 3 << endl;
    cout << 2 * (3 / 2) << endl;
    // relational operators they also two operands give u the boolean op
    cout << (1 > 2) << endl;
    cout << (1 < 2) << endl;
    cout << (1 >= 2) << endl;
    cout << (1 != 2) << endl;
    cout << (4 == 4) << endl;
    // lets see about logical opertors
    cout << (1 && 1) << endl;
    cout << (1 && 0) << endl;
    cout << (1 || 1) << endl;
    cout << (1 || 0) << endl;
    cout << ((1 == 2) && (1 <= 2)) << endl;
    cout << ((1 == 2) || (1 <= 2)) << endl;
    cout << !((1 == 2) || (1 <= 2)) << endl;
    cout << (1 ^ 1) << endl;
    // xor on the same will give u zero
    return 0;
}