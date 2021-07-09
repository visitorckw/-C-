//============================================================================
// Name        : H34086149_hw10_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

int Q1, Q2;
int question();// retrun the answer
int main() {
	srand((unsigned int) time(NULL));

	int answer;
	int input;
	while(true)
	{
		answer = question();
		cout << "How much is " << Q1 << " * " << Q2 << " ?\n";
		while(cin >> input && input != answer)
		{
			cout << "No! Please try again!\n";
			cout << "How much is " << Q1 << " * " << Q2 << " ?\n";
		}
		cout << "Very good!\n";
	}
	return 0;
}
int question()
{
	Q1 = rand() % 10;
	Q2 = rand() % 10;
	return Q1 * Q2;
}
