//============================================================================
// Name        : H34086149_hw10_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <typename T>
T minimum(T x, T y)
{
	return x > y ? y : x;
}

int main() {
	int int1, int2;
	char char1, char2;
	double double1, double2;
	cout << "Please input 2 integers\n";
	cin >> int1 >> int2;
	cout << "The minimum is " << minimum(int1,int2) << '\n';
	cout << "Please input 2 characters\n";
	cin >> char1 >> char2;
	cout << "The minimum is " << minimum(char1,char2) << '\n';
	cout << "Please input 2 floating numbers\n";
	cin >> double1 >> double2;
	cout << "The minimum is " << minimum(double1,double2) << '\n';
	return 0;
}
