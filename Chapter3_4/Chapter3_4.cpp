#include <iostream>

int getPrice(bool onSale)
{
    if (onSale) 
        return 10;
    else 
        return 100;
}

int main()
{
    using namespace std;

    // comma operator

    //int x = 3;
    //int y = 10;
    ////int z = (++x, ++y);
    //++x;
    //++y;
    //int z = y;
    // 
    //cout << x << " " << y << " " << z << endl;
    

    int a = 1, b = 10;
    int z;
    z = (++a, a + b);

    cout << z << endl;




    // conditional operator (arithmetric if)
    bool onSale = false;

    //const int price = (onSale == true) ? 10 : 100;
    const int price = getPrice(onSale);

    //if (onSale)
    //    price = 10;
    //else
    //    price = 100;

    cout << price << endl;




    //-----------------------------------------

    int x = 5;

    cout << ((x % 2 == 0) ? "even" : "odd") << endl;







    return 0;
}

// 쉼표연산자, 조건부 연산자