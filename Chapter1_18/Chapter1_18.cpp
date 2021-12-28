#include <iostream>


void my_function()
{

}

int main()
{
    //void my_void;
    int i = 123;
    float f = 123.456f;

    void *my_void;  //* => 포인터
    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;
}

// 무치형, 보이드, Void, 코딩