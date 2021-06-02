#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, -1, 9, 10, -1, 0, 1, -100, -2};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (i > 0)
        {
            arr[i] = i;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}