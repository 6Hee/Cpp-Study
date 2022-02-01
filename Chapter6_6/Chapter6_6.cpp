#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char source[] = "Copy this!";
    char dest[50];
    strcpy_s(dest, 50, source);

    strcat(dest, source);

    cout << strcmp(source, dest) << endl;


    return 0;
}
