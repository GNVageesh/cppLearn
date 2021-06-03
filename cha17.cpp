#include <iostream>
using namespace std;

/*
 * Calculate the sum of digits of a positive integer number
 * For example if the input is 123 the output should be 1+2+3 = 6
 */

int main()
{
    int num = 12;
    int sum = 0;

    while (num > 0) // because num is a positive value so > 0
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    cout << "The sum is: " << sum << endl;
}