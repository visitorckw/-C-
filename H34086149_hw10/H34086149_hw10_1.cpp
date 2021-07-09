//============================================================================
// Name        : H34086149_hw10_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int tripleByValue(int);
int tripleByReference(int &);
int main() {
	int x;
	cout << "please input a number\n";
	cin >> x;
	tripleByValue(x);
	cout << "Call by value:\n";
	cout << "The value of x = " << x << '\n';
	tripleByReference(x);
	cout << "Call by reference:\n";
	cout << "The value of x = " << x << '\n';
	return 0;
}
int tripleByValue(int x)
{
	x = 3 * x;
	return x;
}
int tripleByReference(int &x)
{
	x = 3 * x;
	return x;
}
