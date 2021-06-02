#include <iostream>
using namespace std;

// Calculate the average of the numbers in an array of numbers

int main()
{
    int arr[] = {5, 3, 6, 7, 5, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    double avg;
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        avg = (double)(sum / len);
    }

    cout << avg << endl;
}