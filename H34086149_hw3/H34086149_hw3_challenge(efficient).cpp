//============================================================================
// Name        : H34086149_hw3_challenge(efficient).cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], unsigned int n) //runtime O(N+N)=O(N)
{
	if(n <= 2) return -1;
	int preffix_sum[n], sum = 0;

	preffix_sum[0] = arr[0];
	for(int i = 1; i < n; i++) preffix_sum[i] = preffix_sum[i-1] + arr[i]; //runtime O(N)
	for(int i = n-1; i >= 2; i--) { //runtime O(N)
		sum += arr[i];
		if(sum == preffix_sum[i-2]) return i-1;
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
