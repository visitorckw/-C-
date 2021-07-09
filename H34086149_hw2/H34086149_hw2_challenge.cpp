//============================================================================
// Name        : H34086149_hw2_challenge.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
#define max(a,b) ((a)>(b)?(a):(b));
using namespace std;

unordered_map<int,int> hash_table; //hash_table紀錄每個值出現的次數

int longest_plateau(vector<int>&arr) //time complexity O(N)
{
	if(arr.empty()) return 0;
	int longest=1;//紀錄目前最大值
	for(int i = 0; i < arr.size(); i++){
		if(hash_table.find(arr[i]) == hash_table.end()) hash_table[arr[i]] = 1;
		else {
			hash_table[arr[i]]++;
			longest = max(longest,hash_table[arr[i]]);
		}
	}
	return longest;
}

int main()
{
	int x,size;
	vector<int> arr;
	cout << "Please enter the size of the array\n";
	cin >> size;
	cout << "Please start entering the array\n";
	for(int i = 0; i < size; i++) {
		cin >> x;
		arr.push_back(x);
	}
	cout << longest_plateau(arr) << '\n';
	return 0;
}

