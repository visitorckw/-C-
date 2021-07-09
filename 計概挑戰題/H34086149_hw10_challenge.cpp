//============================================================================
// Name        : H34086149_hw10_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int N;
vector<int>in;
vector<int>out;

void counting_sort(vector<int>&arr) //O(N)±Æ§Ç
{
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
	}
	vector<int>count(max-min+1,0);
	vector<int>ans = arr;
	for(int i = 0; i < arr.size(); i++)
		count[arr[i]-min]++;
	for(int i = 1; i < count.size(); i++)
		count[i] += count[i-1];
	for(int i = arr.size()-1; i >= 0; i--)
	{
		ans[count[arr[i]-min]-1] = arr[i];
		count[arr[i]-min]--;
	}
	arr = ans;
}

int main()
{
	int temp;
	cout << "Please input the number of people\n";
	cin >> N;
	cout << "Please input the time each people entry\n";
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		in.push_back(temp);
	}
	cout << "Please input the time each people exit\n";
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		out.push_back(temp);
	}
	counting_sort(in);
	counting_sort(out);
	int max_guest = -1, max_time;
	int guest = 0;
	for(int i = 0, j = 0; i < N && j < N;)
	{
		if(in[i] <= out[j])
		{
			guest++;
			if(guest > max_guest)
			{
				max_guest = guest;
				max_time = in[i];
			}
			i++;
		}
		else
		{
			guest--;
			j++;
		}
	}
	cout << "Max guest = " << max_guest << ' ';
	cout << "at time = " << max_time << '\n';
	return 0;
}
