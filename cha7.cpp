#include <iostream>
using namespace std;

// Calculate the sum of even numbers greater than 10 and less than 30

int main()
{
    int sum = 0;
    int n = 11;

    while (n > 10 && n < 30)
    {
        if (n % 2 == 0)
        {
            sum += n;
            n++;
        }
    }

    cout << sum << endl;
}
