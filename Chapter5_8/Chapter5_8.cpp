#include <iostream>

using namespace std;

void breakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break;
        if (ch == 'r')
            return;
    }

    cout << "Hello" << endl;
}

int main()
{
    //breakOrReturn();
    
    /*for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0) continue;

        cout << i << endl;
        
    }*/

    /*

    do
    {
        if (count == 5)
            continue;

        cout << count << endl;

    } while (++count < 10);*/



    int count(0);
    //bool escape_flag = false;
    while (true)
    {
        char ch;
        cin >> ch;

        cout << ch << " " << count++ << endl;

        if (ch == 'x')
            break;
    }



    return 0;
}

// break, continue