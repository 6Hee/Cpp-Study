#include <iostream>

int main()
{
	using namespace std;

	/*
	 10진수
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10 = 10^1 + 0
	11 = 10^1 + 1
	12
	13
	...
	337 = 300 + 30 + 7 = 10^2 *3 + 10^1 *3 + 10^0 *7

	148 ( decimal to binary )
	148 / 2 = 74 r0 ( r = remainder )
	74 / 2 = 37 r0
	37 / 2 = 18 r1
	18 / 2 = 9 r0
	9 / 2 = 4 r1
	4 / 2 = 2 r0
	2 / 2 = 1 r0
	1 / 2 = 0 r1
	== 1001 0100

	*/


	/*
	2진수
	0
	1
	10 = 1 + 1 = 2^1 *1 + 2^0 *0
	11 = 2^1 *1 + 2^0 *1 = 3
    1010 = 2^3 * 1 + 2^2 * 2  
	  1
	  11
	+  1
	-----
	 100

	11
	0110 ( 6 in decimal )
	0111 ( 7 in decimal )
	-------
    1101 ( 13 in decimal )

	*/


	/*
	-5
	0000 0101
	보수 complement =>
	1111 1010 => 마지막에 +1
	1111 1011 <- -5
	
	0000 0000
	1111 1111 => +1
	0000 0000


	1001 1110
	0110 0001
	0110 0010 -> 98 -> -98

	// signed vs unsigned
	1001 1110 -> 2^7*1 + 2^4*1 + 2^3*1 + 2^2*1 + 2^1*1 = 128+16+8+4+2


	*/


	return 0;
}

// 이진수 Binary Numbers