#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = sizeof(arr) / sizeof(int) - 1;
    int temp;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {

        cout << arr[i];
    }

    return 0;
}