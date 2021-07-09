//============================================================================
// Name        : H34086149_hw4_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <bits/stdc++.h>
using namespace std;

vector<int>arr;
int x;

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	while(cin >> x) arr.push_back(x);//ending by EOF(Crtl+z)
	if(arr.empty()) return 0;
	if(arr.size() == 1)
	{
		cout << arr[0] << ' ';
		return 0;
	}
	if(arr[0] >= arr[1]) cout << arr[0];
	for(int i = 0; i < arr.size() - 1; i++)
	{
		if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1]) cout << arr[i] << ' ';
	}
	if(arr.back() >= *(arr.end()-2)) cout << arr.back();
	return 0;
}
