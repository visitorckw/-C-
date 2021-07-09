//============================================================================
// Name        : H34086149_hw14_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
	int times;
	char ch;
	bool operator<(const node &n)
	{
		return times > n.times;
	}
	node()
	{
		times = 0;
	}
};
int main()
{
	string s;
	while(true)
	{
		node arr[26];
		for(int i = 0; i < 26; i++)
			arr[i].ch = 'a' + i;
		getline(cin,s);
		if(s.empty())
			break;
		for(auto c : s)
		{
			if('a' <= c && c <= 'z')
				arr[c-'a'].times++;
			else if('A' <= c && c <= 'Z')
				arr[c-'A'].times++;
		}
		sort(arr,arr+26);
		for(int i = 0; i < 26; i++)
		{
			if(arr[i].times <= 0)
				break;
			cout << arr[i].ch << ' ' << arr[i].times << '\n';
		}
	}
		return 0;
}
