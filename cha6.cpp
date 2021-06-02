#include <iostream>
using namespace std;

// Calculate 10!

int main()
{
    int pro = 1;
    for (int i = 10; i > 0; i--)
    {
        pro *= i;
    }

    cout << pro << endl;
}