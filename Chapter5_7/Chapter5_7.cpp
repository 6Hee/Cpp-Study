#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;

    return result;
}

int main()
{
    /*int i = 0, j = 0;
    for (; (i + j) < 10; ++i, j+= 2)
    {
        cout << i << " " << j << endl;
    }*/

    /*for (int j= 0; j < 9; ++j)
        for (int i = 0; i < 9; ++i)
        {
            cout << i << " " << j << endl;
        }*/

    for (unsigned int i = 9; i >= 0; --i)
        cout << i << endl;

    return 0;
}
