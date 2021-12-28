#include <iostream>
#include <cmath>
#include <limits>


int main()
{
    using namespace std;

    short s = 1; // 2bytes = 2 * 8 bits = 16 bits

    /*cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;  
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;*/

    s = std::numeric_limits<short>::min();
    cout << "min() " << s << endl;

    s = s - 1;
    cout << s << endl;  // overflow

 
    //int i = 22 / 4;
    
    cout << (float)22 / 4 << endl;


    return 0;
}

//2.2 정수형, 코딩