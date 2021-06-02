#include <iostream>
using namespace std;

// Calculate the sum of numbers in an array of numbers

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += i;
    }

    cout << sum << endl;
}