//============================================================================
// Name        : H34086149_hw11_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr) // O(logN)
{
	int L = 0, R = arr.size() - 1, m;
	while(true)
	{
		if(R - L <= 1)
			return arr[L] > arr[R] ? arr[L] : arr[R];
		m = L + (R - L) / 2;
		if(arr[m-1] < arr[m])
		{
			if(arr[m] > arr[m+1])
				return arr[m];
			else
				L = m + 1;
		}
		else
			R = m - 1;
	}
}
int main()
{
	int x;
	vector<int>arr;
	cout << "Please input the array\n";
	while(cin >> x)//ending by EOF
		arr.push_back(x);
	cout << search(arr) << '\n';
	return 0;
}
