#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    // switch (c)
    // {
    // case 1:

    //     cout << "monday";
    //     break;
    // case 2:

    //     cout << "tuesday";
    //     break;

    // case 3:

    //     cout << "wednesay";
    //     break;
    // default:
    //     cout << "no day";

    //     break;
    // }

    switch (c)
    {
    case 1:
    case 2:
    case 3:
        cout << 'A' << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "b" << endl;
        break;

    default:
        cout << "c" << endl;
        break;
    }

    string s = "hello this is smy name";
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        // cout << s[i] << endl;
        cout << s[i];
    }

    for (int i = 5; i >= 1; i--)
    {

        cout << i << endl;
    }
    return 0;
}