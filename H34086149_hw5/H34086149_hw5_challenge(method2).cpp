//============================================================================
// Name        : H34086149_hw5_challenge(method2).cpp
// Author      : mr.NTD
// Version     : counting sort version
// Copyright   : Your copyright notice
// Description : without array
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int x;
int ctr0 = 0, ctr1 = 0, ctr2 = 0;

int main() {
	//ios::stnc_with_stdio(false);
	//cin.tie(0);
	while(cin >> x)
	{
		switch(x)
		{
			case 0:
				ctr0++;
				break;
			case 1:
				ctr1++;
				break;
			default:
				ctr2++;
				break;
		}
	}
	for(int i = 0; i < ctr0; i++) cout << 0 << ' ';
	for(int i = 0; i < ctr1; i++) cout << 1 << ' ';
	for(int i = 0; i < ctr2; i++) cout << 2 << ' ';
	return 0;
}
