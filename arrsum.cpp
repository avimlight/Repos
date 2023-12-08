#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of the array is" << sum << endl;
    return 0;
}