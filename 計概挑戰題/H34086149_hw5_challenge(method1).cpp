//============================================================================
// Name        : H34086149_hw5(method1).cpp
// Author      : mr.NTD
// Version     : two pointer version
// Copyright   : Your copyright notice
// Description : The code is accepted by leetcode #75 sort color
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int L = 0, R, i = 0, x;
vector<int>nums;

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	while(cin >> x) nums.push_back(x);
	R = nums.size() - 1;
	while(i <= R)
	{
		if(!nums[i]) swap(nums[i++],nums[L++]);
		else if(nums[i] == 2) swap(nums[i],nums[R--]);
		else i++;
	}
	for(auto a : nums) cout << a << ' ';
	cout << '\n';
	return 0;
}
