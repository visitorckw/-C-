//============================================================================
// Name        : H34086149_hw6_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : backtracking (brute force)
//============================================================================

#include <bits/stdc++.h>
using namespace std;

unsigned int num;
vector<int>v;

void backtracking(const int,const int);
void PrintAns();

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	cout << "Please input a number\n";
	cin >> num;
	backtracking(num,1);
	return 0;
}

void backtracking(const int num,const int min) // min用來保證數字由小到大 避免重複組合
{
	for(int i = min; i < num; i++)
	{
		v.push_back(i);
		backtracking(num - i, i);
		v.pop_back();
	}
	if(num >= min)
	{
		v.push_back(num);
		PrintAns();
		v.pop_back();
	}
}

void PrintAns()
{
	for(auto i : v) cout << i << ' ';
	cout << '\n';
}
