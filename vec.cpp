#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector they are dynamic array size is varried better than our array
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // inserting in array is done by  push_back and insert  and delete is done by pop_back and erase
    // cout << a.size() << endl; // this gives u the size

    // vector<int> b = {1, 2, 3, 4};
    // b.push_back(89);
    // cout << b.size() << endl;
    // b.insert(b.begin() + 2, 45);
    // cout << b[2];
    // b.insert(b.begin() + 4, 89);
    // cout << b[4] << endl;
    // // se erase nd insert uses begin
    // b.erase(b.begin() + 2);
    // cout << b[2] << endl;
    vector<int> b = {1, 2, 4, 5, 6};
    // int n = b.size();
    // cout << "the lenght of the vector is " << n;
    b.push_back(56);
    for (int i = 0; i < b.size(); i++)
    {

        cout << b[i] << " ";
    }
    // or we can implement uing
    cout << endl;
    for (int i = 0; i < b.size(); i++)
    {

        cout << b.at(i) << " ";
    }
    cout << endl;
    b.insert(b.begin() + 3, 456);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b.at(i) << endl;
    }
    b.at(3) = 987;
    cout << b[3] << endl;
    // v.erase(v.begin()+2,45)
    // if we wnant to clear the entire vector we use the
    b.clear();
    cout << b.size() << endl;
    cout << b[0] << endl;
    return 0;
}