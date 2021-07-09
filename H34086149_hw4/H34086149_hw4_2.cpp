//============================================================================
// Name        : H34086149_hw4_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int n;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(!i || !j || i == n - 1 || j == n - 1) cout << '*';
			else cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}

