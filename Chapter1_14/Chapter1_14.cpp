#include <iostream>
//#include <algorithm>
using namespace std;


#define LIKE_APPLE //영향 범위가 "Chapter1_14.cpp" 안에서만 효력이 나타남

void doSomething();

int main()
{

    doSomething();
    //cout << std::max(1 + 3, 2) << endl;

    return 0;
}


//전처리기와의 첫 만남