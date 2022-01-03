#include <iostream>

namespace work1::work11::work111
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething()
    {
        a += 5;
    }
}

int main()
{
    using namespace std;

    //int apple = 5;

    //cout << apple << endl; //5

    //{
    //    int apple = 1;

    //    cout << apple << endl; //1
    //}

    //cout << apple << endl; //5


    work1::work11::work111::doSomething();



    return 0;
}
