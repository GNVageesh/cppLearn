#include <iostream>

// Print the odd numbers less than 100

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << std::endl;
        }
    }
}