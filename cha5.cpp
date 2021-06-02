#include <iostream>
using namespace std;

// Calculate the sum of numbers from 1 to 10

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    cout << sum << endl;
}