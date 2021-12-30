#include <iostream>
//#define PRICE_PER_ITEM 30
#include "MY_CONSTANTS.h"

using namespace std;

int main()
{
    double radius;
    cin >> radius;

    double circumference = 2.0 * radius * constants::pi;

    cout << circumference << endl;


    return 0;
}

// 심볼릭 상수