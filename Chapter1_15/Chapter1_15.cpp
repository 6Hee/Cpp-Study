#include <iostream>


int main()
{
	using namespace std;

	bool bValue = false;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	//auto aValue = 3.141592;
	//auto aValue2 = 3.141592f;

	//cout << sizeof(aValue) << endl;
	//cout << sizeof(aValue2) << endl;

	cout << sizeof(bool) << endl;	//1
	cout << sizeof(bValue) << endl; //1
	cout << sizeof(float) << endl;	//4
	cout << sizeof(double) << endl; //8

	int i = (int)3.1415; // copy initialization
	int a((int)3.14); // direct initialization
	int b{ 4 }; // uniform initialization

	int k = 0, l(456), m{ 123 };
	//int l;

	return 0;

}

//2.1 기본 자료형 소개, 코딩