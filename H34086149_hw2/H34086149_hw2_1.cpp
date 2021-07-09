//============================================================================
// Name        : H34086149_hw2_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x, sum, product, smallest, largest, crt = 0;

	cout << "Please start entering three numbers ";
	cin >> x;
	crt++;
	sum = x;
	product = x;
	smallest = x;
	largest = x;
	while(crt < 3)
	{
		cin >> x;
		crt++;
		sum = sum + x;
		product = product * x;
		if(smallest > x) smallest = x;
		if(largest < x) largest = x;
	}
	cout << "Sum is " << sum << '\n';
	cout << "Average is " << sum*1.0/crt << '\n';
	cout << "product is " << product << '\n';
	cout << "Smallest is " << smallest << '\n';
	cout << "Largest is " << largest << '\n';
	return 0;
}
