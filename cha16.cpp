#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter a number to check if it is Prime or Not: " << endl;
    cin >> n;

    // Terneray operator
    isPrime(n) ? cout << "true" << endl : cout << "false" << endl;
}