#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl; // #2 123
}

int main()
{
	int x = 0;

	cout << x << endl; // #1 0
	doSomething(x);
	cout << x << endl; // #3 0

	return 0;
}