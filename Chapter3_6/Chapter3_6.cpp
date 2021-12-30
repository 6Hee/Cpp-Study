#include <iostream>

int main()
{
    using namespace std;

    // logical NOT
    //bool x = true;

    //cout << !x << endl;

    // logical AND
    bool a = true;
    bool b = false;

    cout << (a && b) << endl;

    bool hit = true;
    int health = 10;

    if (hit == true && health < 20)
    {
        cout << "die " << endl;
    }
    else
        health -= 20;


    // logical OR ||
    bool c = true;
    bool d = false;

    cout << (c || d) << endl;


    int e = 7;
    int f = 5;

    //if ((!e) == f) // 두개가 다르다라는 것을 증명 할 수 없음
    if (e != f)
    {
        cout << " e does not equal f" << endl;
    }
    else
        cout << " e equals f" << endl;





    int v = 1;

    if (v == 0 || v == 1)
        cout << "v is 0 or 1" << endl;



    // short circuit evaluation
    int g = 2;
    int h = 2;

    if (g == 1 && h++ == 2) //g != 1 이기때문에 h++까지 연산하지 않고 바로 false로 처리
    {
        // do something
    }

    cout << h << endl;



    bool x = true;
    bool y = false;

    // De Morgan's Law
    !(x || y);
    !x && !y;


    // XOR
    // false false  = false
    // false true   = true
    // true false   = true
    // true true    = false

    cout << (x != y) << endl; //true



    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);

    cout << r1 << " " << r2 << " " << r3 << endl;


    return 0;
}

// 논리 연산자 logical operators