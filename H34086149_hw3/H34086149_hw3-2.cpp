//============================================================================
// Name        : H34086149_hw3-2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i = 1, times;

	cout << "N\t10*N\t100*N\t1000*N\n";
	while(i <= 5)
	{
		times = 1;
		while(times <= 1000)
		{
			cout << i * times << '\t';
			times *= 10;
		}
		cout << '\n';
		i++;
	}
	return 0;
}
