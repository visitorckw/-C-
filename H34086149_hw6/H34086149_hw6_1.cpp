//============================================================================
// Name        : H34086149_hw6_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : 5.32
//============================================================================

#include <iostream>
using namespace std;

int qualityPoints(const int &grade)
{
	if(grade < 60)
		return 0;
	if(grade < 70)
		return 1;
	if(grade < 80)
		return 2;
	if(grade < 90)
		return 3;
	if(grade <= 100)
		return 4;
	cout << "The grade should not be greater than 100\n";
	return -1;
}

int main() {
	int grade;
	cout << "Please input the student's grade\n";
	cin >> grade;
	cout << "The quality of the grade is " << qualityPoints(grade) << '\n';
	return 0;
}
