#include <iostream>
#include "MyConstants.h"


extern int a = 123;

void doSometing()
{
	using namespace std;

	cout << "In test.cpp" << Constants::pi << " " << &Constants::pi << endl;
}