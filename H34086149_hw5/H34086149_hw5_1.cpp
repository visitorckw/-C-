//============================================================================
// Name        : H34086149_hw5_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double sum = 0.0;
bool positive = true;

int main() {
	for(int i = 1; i < 2000; i+=2)
	{
		if(positive)sum += 4.0 / i;
		else sum -= 4.0 / i;
		positive = !positive;
	}
	cout << "PI = " << sum << '\n';
	return 0;
}
