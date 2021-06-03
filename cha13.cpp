#include <iostream>
using namespace std;

// Find the maximum number in an array

int main()
{
    int arr[] = {1, 2, 3, 4, 9, 8, 7, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;
}