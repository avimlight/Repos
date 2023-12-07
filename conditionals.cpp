#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // getline(cin, s);
    // cout << "the value of the string is " << s << endl;
    // cout << s.length() << endl;
    // string sd = "hello";
    // sd.push_back('w');
    // sd.push_back('os');
    // sd.push_back('p');
    // cout << sd << endl;
    // sd.pop_back();
    // cout << sd << endl;

    // sd.insert(2, "world");
    // cout << sd << endl;
    // string f = "avinash s monteiro";
    // string g = "puthu s monteiro";
    // f.append(g);
    // f.swap(g);
    // cout << f << g << endl;
    // int a = 12;
    // if (a < 10)
    // {

    //     cout << "its a smaller value" << endl;
    // }
    // else
    // {

    //     cout << "its a larger value " << endl;
    // }
    // int b = 12;
    // if (b == 12)
    // {
    //     cout << "the value is lesser" << endl;
    // }
    // else if (b > 11)
    // {
    //     cout << "yaa yaa" << endl;
    // }
    // else
    // {
    //     cout << "ohk" << endl;
    // // }
    // int a = 1;
    // int b = 2;
    // int c = 3;

    // int max = a;
    // if (max < b)
    // {
    //     max = b;
    // }
    // if (max < c)
    // {
    //     max = a;
    // }
    // cout << "the max is" << max << endl;
    // if (a >= b && a >= c)
    // {
    //     cout << "the greater is" << a << endl;
    // }
    // else if (b >= a && b >= c)
    // {
    //     cout << "the greater is" << b << endl;
    // }
    // else
    // {
    //     cout << "the greater is" << c << endl;
    // }
    int a = 1, b = 2, c = 3;
    if (a > b)
    {

        if (a > c)
        {

            cout << "a is larger" << a << endl;
        }
        else
        {

            cout << "c is bigger" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is bigger" << endl;
        }
        else
        {

            cout << "c is bigger" << endl;
        }
    }
    // ternary operator
    int d = 12;
    int e = 13;
    string st = (d < e) ? "d is smalller" : "d is larger";
    cout << st << endl;

    return 0;
}