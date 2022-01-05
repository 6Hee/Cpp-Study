#include <iostream>
#include <string>

using namespace std;

struct Employee     // 2 + (2) + 4 + 8 = 16 // padding
{
    short   id;     // 2bytes
    int     age;    // 4bytes
    double  wage;   // 8bytes
};

int main()
{
    Employee emp1;

    cout << sizeof(Employee) << endl;

    return 0;
}
