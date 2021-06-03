#include <iostream>
using namespace std;

// Print first 10 numbers of Fibonacci Series

int main()
{
    int a = 0;
    int b = 1;
    int c;

    cout << a << " " << b << " ";

    for (int i = 2; i < 10; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}