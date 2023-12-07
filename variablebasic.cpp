#include <bits/stdc++.h>
using namespace std;

int main()
{
 cout << sizeof(int) << endl;
    ;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << INT_MIN << endl;
    cout << INT_MAX << endl;
    cout << INT_MAX - INT_MIN << endl;
    cout << stoi("1") << endl; // implementing string to integr
    cout << stof("1.23") << endl;
    cout << 4 / 5 << endl;
    char d = '$';
    cout << int(d) << endl;
    cout << float(4 / 5) << endl;
    cout << 4.0 / 5 << endl;
    char c = 'a';
    cout << int(c) << endl;
    // conversion to the string is
    cout << to_string(1) << endl;
    int n;
    cin >> n;
    cout << n << endl;

    string s;
    cin >> s;
    cout << s << endl;
    now this si a tricker part where after space whatever words wont be considered so we use getline fn
        string sa;
    getline(cin, sa);
    cout << sa;

    return 0;
}
