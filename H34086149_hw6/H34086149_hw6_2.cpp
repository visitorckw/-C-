//============================================================================
// Name        : H34086149_hw6_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : 5.33
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

bool flip()
{
	if(rand() & 1)// µ¥©óif(rand() % 2)
	{
		cout << "Heads\n";
		return 1;
	}
	cout << "Tails\n";
	return 0;
}

int heads = 0, tails = 0;
int main() {
	srand((unsigned int) time(NULL));
	for(int i = 0; i < 100; i++)
	{
		if(flip()) heads++;
		else tails++;
	}
	cout << "Heads: " << heads << '\n';
	cout << "Tails: " << tails << '\n';
	return 0;
}
