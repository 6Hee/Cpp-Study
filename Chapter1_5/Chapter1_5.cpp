#include <iostream>

using namespace std;

void print()
{
	cout << "Hellow" << endl;
}

void addTwoNumbers(int a, int b)
{
	int sum = a + b;

	cout << sum << endl;
}

int main()
{
	//int sum = addTwoNumbers(1, 2);

	addTwoNumbers(1, 2);

	print();

	return 0;
}
