#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;
    double d = 123.0;
    
    int *ptr_x;
    double *ptr_d;

    //cout << *ptr_x << endl;

    /*
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;
    */


    return 0;
}
// 포인터의 기본적인 사용법