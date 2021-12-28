#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}


int main()
{
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false); // direct '''
	bool b3{ true }; // uniform ini ...
	b3 = false;

	cout << std::noboolalpha;
	cout << (true && true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;




	if (true)
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
		cout << "This is false" << endl;

	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;




	if (0)
	{
		cout << "True" << endl;
	}
	else
		cout << "False" << endl;




	//bool b;

	//cin >> b;
	//cout << std::boolalpha;
	//cout << "Your input : " << b << endl;


	int c;

	cin >> c;

	if (c % 2 == 0)
		cout << "짝수 입니다." << endl;
	else
		cout << "홀수 입니다." << endl;


	return 0;
}

//2.6 불리언 자료형과 조건문 if, 코딩