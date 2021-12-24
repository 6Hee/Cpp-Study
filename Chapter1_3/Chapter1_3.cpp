#include <iostream>

int main()
{
	//int x(123); // initialization
	//x = 5; // assignment
	//std::cout << x << std::endl;

	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;  // #1. 3

	int y = x;
	std::cout << y << std::endl;  // #2. 3

	// is (x + y) l-value or r-value ?
	std::cout << x + y << std::endl; // #3. 6

	std::cout << x << std::endl;  // #4. 3

	//int z;
	//std::cout << z << std::endl; // #5. 


	return 0;
}

