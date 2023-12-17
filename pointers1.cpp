#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = &arr[0];
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {

        cout << "the adrres is" << ptr + i << endl;
    }
    // cool approach
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << *(ptr + i) << endl;
    }
    return 0;
}