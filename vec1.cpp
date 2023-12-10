#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }

    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(5);
    b.pop_back();
    b.insert(b.begin() + 2, 234);
    b.insert(b.begin() + 3, 34);
    b.erase(b.begin() + 2);
    for (int i = 0; i < b.size(); i++)
    {

        cout << b.at(i) << endl;
    }
    b.at(2) = 456;
    cout << b.at(2) << endl;
    return 0;
}