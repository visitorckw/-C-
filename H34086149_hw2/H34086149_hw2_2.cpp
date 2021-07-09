//============================================================================
// Name        : H34086149_hw2_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x, smallest, largest, crt = 0;

	cout << "Please start entering five numbers ";
	cin >> x;
	crt++;
	smallest = x;
	largest = x;
	while(crt < 5)
	{
		cin >> x;
		crt++;
		if(smallest > x) smallest = x;
		if(largest < x) largest = x;
	}
	cout << "The smallest number is " << smallest << '\n';
	cout << "The largest number is " << largest << '\n';
	return 0;
}
