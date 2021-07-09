//============================================================================
// Name        : H34086149_hw5_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4 - i; j++) cout << ' ';
		for(int j = 0; j < (i << 1) + 1; j++) cout << '*';
		cout << '\n';
	}
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < i + 1; j++) cout << ' ';
		for(int j = 0; j < 7 - (i << 1); j++) cout << '*';
		cout << '\n';
	}
	return 0;
}
