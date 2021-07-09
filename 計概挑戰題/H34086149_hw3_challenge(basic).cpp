//============================================================================
// Name        : H34086149_hw3_challenge(basic).cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], unsigned int n) //runtime O(N^2)
{
	if(n <= 2) return -1;
	int preffix_sum, suffix_sum;

	for(int i = 1; i < n-1; i++) {
		preffix_sum = 0;
		suffix_sum = 0;
		for(int j = 0; j < i; j++) preffix_sum += arr[j];
		for(int j = i+1; j < n; j++) suffix_sum += arr[j];
		if(preffix_sum == suffix_sum) return i;
	}
	return -1;
}

int main()
{
	unsigned int n;

	cout << "請輸入陣列長度\n";
	cin >> n;
	int arr[n];
	cout << "請開始輸入陣列\n";
	for(int i = 0; i < n; i++) cin >> arr[i];
	cout << equilibrium(arr,n) << '\n';
	return 0;
}

