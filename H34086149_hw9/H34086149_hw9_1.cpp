//============================================================================
// Name        : H34086149_hw9_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
double power(double base, unsigned int exponent)
{
	if(exponent == 1)
		return base;
	return base * power(base, exponent - 1);
}
int main()
{
	double base;
	int exponent;
	cout << "Please input the base and the exponent\n";
	cin >> base >> exponent;
	cout << power(base,exponent) << '\n';
	return 0;
}

