//============================================================================
// Name        : H34086149_hw3_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int counter = 0, number, largest;

	cout << "Please input 10 numbers\n";
	cin >> number;
	counter++;
	largest = number;
	while(counter < 10 && cin >> number)
	{
		counter ++;
		if(number > largest) largest = number;
	}
	cout << "The largest number is " << largest << '\n';
	return 0;
}
