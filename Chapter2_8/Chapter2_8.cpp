#include <iostream>

int main()
{
    using namespace std;

    //Decimal 10����    : 0 1 2 3 4 5 6 7 8 9 10
    //Octal   8����     : 0 1 2 3 4 5 6 7 10 11 12 13
    //Hexa    16����    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 

    // 0011 1010 1111 1111
    // 3A7F


    int x = 0b1010'1111'1010;
    cout << x;

    const int price_per_item = 10;
    int num_items = 123;
    int price = num_items * price_per_item; // �ּ��� �ȴ޾Ƶ� ��




    return 0;
}
