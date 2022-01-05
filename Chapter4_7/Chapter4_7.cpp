#include <iostream>
#include <typeinfo>
#include <string>


enum Color // user-defined data types
{
    COLOR_BLACK = -3,
    COLOR_RED,
    COLOR_BLUE = 5,
    COLOR_GREEN = 5,
    COLOR_SKYBLUE,
    BLUE,
};

int computeDamange(int weapon_id)
{
    if (weapon_id == 0) // sword
    {
        return 1;
    }

    if (weapon_id == 1) // hammer
    {
        return 2;
    }
}

int main()
{
    using namespace std;

    int color_id = COLOR_RED;

    Color my_color = static_cast<Color>(3);

    //cin >> my_color;

    /*int in_number;
    cin >> in_number;*/
    string str_input;

    std::getline(cin, str_input);


    if (str_input == "COLOR_BLACK")
        my_color = static_cast<Color>(0);



    return 0;
}

// ¿­°ÅÇü enumerated types