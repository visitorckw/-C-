//============================================================================
// Name        : H34086149_hw11_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

inline int simulation()
{
	return rand() % 6 + rand() % 6 + 2;
}
int main()
{
	srand((unsigned int) time(NULL));
	int ctr[13];
	memset(ctr,0,sizeof(ctr));
	for(int i = 0; i < 3.6e4; i++)
		ctr[simulation()] ++;
	cout << "Sum:\t";
	for(int i = 2; i <= 12; i++)
		cout << i << '\t';
	cout << "\nTimes:\t";
	for(int i = 2; i <= 12; i++)
		cout << ctr[i] << '\t';
	return 0;
}
