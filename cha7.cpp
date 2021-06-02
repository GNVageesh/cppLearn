#include <iostream>
using namespace std;

// Calculate the sum of even numbers greater than 10 and less than 30

int main()
{
    int sum = 0;
    int n = 11;

    for (int i = 11; i < 30; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
}
