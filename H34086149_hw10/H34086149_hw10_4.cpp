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
void goodMessage();
void badMessage();
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
			badMessage();
			cout << "How much is " << Q1 << " * " << Q2 << " ?\n";
		}
		goodMessage();
	}
	return 0;
}
int question()
{
	Q1 = rand() % 10;
	Q2 = rand() % 10;
	return Q1 * Q2;
}
void goodMessage()
{
	switch(rand() & 3)//等於rand() % 4 , 位元運算加速
	{
		case 1:
			cout << "Very good!\n";
			return ;
		case 2:
			cout << "Excellent!\n";
			return ;
		case 3:
			cout << "Nice work!\n";
			return ;
		default:
			cout << "Keep up the good work!\n";
			return ;
	}
}
void badMessage()
{
	switch(rand() & 3)//等於rand() % 4
	{
		case 1:
			cout << "No. Please try again!\n";
			return ;
		case 2:
			cout << "Wrong. try once more!\n";
			return ;
		case 3:
			cout << "Dont't give up!\n";
			return ;
		default:
			cout << "No. Keep trying!\n";
			return ;
	}
}
