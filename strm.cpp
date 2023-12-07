#include <bits/stdc++.h>
using namespace std;

int main()
{
    // left shift and  right shift operator
    cout << (3 << 1) << endl;
    cout << (3 >> 1) << endl;
    cout << pow(3, 2) << endl;
    // assignment operator
    int a = 1;
    a += 1;
    cout << a << endl;
    cout << strlen("my namae ") << endl; // this sgives u the length of the string
    cout << min(3, 4) << endl;
    cout << max(3, 4) << endl;
    cout << floor(4.5) << endl;
    cout << ceil(4.9) << endl;
    cout << M_PI << endl;
    cout << M_E << endl;
    cout << sqrt(25) << endl;
    cout << cbrt(125) << endl;
    cout << abs(-7) << endl;
    cout << floor(3.5) << endl;
    cout << ceil(3.5) << endl;
    cout << floor(-3.5) << endl;
    cout << ceil(-3.5) << endl;
    cout << round(4.4) << endl;
    cout << round(4.5) << endl;
    // char p[50] = "this is my space";
    // cout << p[0] << endl;
    // string s = "so we know how to implement in both methods";
    // cout << s << endl;
    // char t[] = "this is my name so i know itll be checked by someone";
    // cout << t << endl;
    // char ty[50];
    // cin.get(ty, 50);
    // cout << ty << endl;
    char s[50] = "this is avinash s monteiro";
    cout << strlen(s) << endl;
    // char s1[50];
    // strcpy(s1, s);
    // cout << s1 << endl;
    // wer ru ing the char array as the strlen fn so we know how to implement it its only used for the char array
    char fg[50] = "this is the way to do it";
    char ft[50];
    strcpy(ft, fg);
    cout << ft << endl;
    strcat(fg, ft);
    cout << fg << endl;
    char sr[50] = "this is me";
    char rs[50] = "this is unini";
    cout << strcmp(sr, rs) << endl;

    return 0;
}