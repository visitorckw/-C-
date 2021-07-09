//============================================================================
// Name        : H34086149_hw8_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

vector<int>arr;
vector<pair<int,int>>group;
vector<vector<int>>ans;

void make_group()
{
	if(arr.empty())
	{
		ans.push_back(arr);
		return;
	}
	int pre = arr.front(), ctr = 1;
	for(int i = 1; i < arr.size(); i++)
	{
		if(arr[i] == pre)
			ctr++;
		else
		{
			group.push_back(make_pair(pre,ctr));
			pre = arr[i];
			ctr = 1;
		}
	}
	group.push_back(make_pair(pre,ctr));
}
vector<int>temp;
void backtracking(const int n)
{
	if(n == group.size())
	{
		ans.push_back(temp);
		return;
	}
	backtracking(n+1);
	for(int i = 0; i < group[n].second; i++)
	{
		temp.push_back(group[n].first);
		backtracking(n+1);
	}
	for(int i = 0; i < group[n].second; i++)
		temp.pop_back();
}
int main()
{
	int x;
	cout << "Please input the set element:\n";
	while(cin >> x)
		arr.push_back(x);
	sort(arr.begin(),arr.end());
	make_group();
	backtracking(0);
	//sort(ans.begin(),ans.end());
	cout << "subsets are :\n";
	for(int i = 0; i < ans.size(); i++)
	{
		for(int j = 0; j < ans[i].size(); j++)
			cout << ans[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}
