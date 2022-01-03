#include <iostream>
#include "MyConstants.h"

using namespace std;

void doSometing();

/*
    int g_x; // external linkage
    static int g_x; // internal linkage
    const int g_x; // X

    extern int g_z;
    extern const int g_z;

    int g_y(1);
    static int g_y(1);
    const int g_y(1);
*/

int main()
{
    cout << "In main.cpp file" << Constants::pi << " " << &Constants::pi << endl;

    doSometing();
    

    return 0;
}

// 전역 변수, 정적 변수, 내부 연결, 외부 연결