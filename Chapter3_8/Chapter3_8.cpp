#include <iostream>
#include <bitset>


int main()
{
    using namespace std;

   /* unsigned int a = 1024;

    cout << std::bitset<16>(a) << endl; 

    cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
    cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
    cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
    cout << std::bitset<16>(~a) << " " << (~a) << endl;
    
    
    */


    unsigned int a = 0b1100;
    unsigned int b = 0b0110;
    
    cout << a << " " << b << endl;
    cout << std::bitset<4>(a & b) << endl; // bitwise AND
    cout << std::bitset<4>(a | b) << endl; // bitwise OR
    cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

    a &= b; 

    //Quiz 
    // (0110 >> 2) -> decimal 0001 
    // 5 | 12  0101 | 1010 => 1111
    // 5 & 12  => 0000
    // 5 ^ 12  => 1111

    cout << std::bitset<4>(0b0110 >> 2) << endl;
    cout << std::bitset<4>(0b0101 | 0b1010) << endl;
    cout << std::bitset<4>(0b0101 &  0b1010) << endl;
    cout << std::bitset<4>(0b0101 ^ 0b1010) << endl;



    return 0;
}

// 비트단위 연산자 Bitwise Operators