#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    /*
    const bool item1_flag = false;
    const bool item2_flag = false;
    const bool item3_flag = false;
    const bool item4_flag = false;
    */

    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, 5, 6, 7


    cout << std::bitset<8>(opt0) << endl;
    cout << std::bitset<8>(opt1) << endl;
    cout << std::bitset<8>(opt2) << endl;
    cout << std::bitset<8>(opt3) << endl;

    unsigned char items_flag = 0;
    
    cout << "No item" << bitset<8>(items_flag) << endl;

    // item0 on
    items_flag |= opt0;
    cout << "item0 obtained" << bitset<8>(items_flag) << endl;

    // item3 on
    items_flag |= opt3;
    cout << "item3 obtained" << bitset<8>(items_flag) << endl;

    // item3 lost
    items_flag &= ~opt3;
    cout << "item3 lost" << bitset<8>(items_flag) << endl;

    // has item1 ?
    if (items_flag & opt1) {cout << "Has item1" << endl;}
    else { cout << "Not have item1" << endl; }

    // has item0 ?
    if (items_flag & opt0) { cout << "Has item0" << endl; }

    // obtained item 2, 3
    items_flag |= (opt2 | opt3);

    cout << bitset<8>(opt2 | opt3) << endl; //00001100
    cout << "Item2, 3 obtained" << bitset<8>(items_flag) << endl; // Item2, 3 obtained00001101


    if ((items_flag & opt2) && !(items_flag & opt1))
    {
        items_flag ^= (opt2 | opt1);

    }

    cout << bitset<8>(items_flag) << endl;


    //-------------------------------------------

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;


    cout << std::bitset<32>(red_mask) << endl;
    cout << std::bitset<32>(green_mask) << endl;
    cout << std::bitset<32>(blue_mask) << endl;


    unsigned int pixel_color = 0xDAA520;

    cout << std::bitset<32>(pixel_color) << endl;

    unsigned char red = (pixel_color & red_mask) >> 16;
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char blue = pixel_color & blue_mask;

    cout << "blue" << bitset<8>(red) << " " << int(red) << endl;
    cout << "blue" << bitset<8>(green) << " " << int(green) << endl;
    cout << "blue" << bitset<8>(blue) << " " << int(blue) << endl;




    return 0;
}

// 비트 플래그, 비트 마스크 사용법