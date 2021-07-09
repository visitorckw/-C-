//============================================================================
// Name        : H34086149_hw11_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int number;
	vector<int> arr;
	cout << "Please input 20 numbers\n";
	for(int i = 0; i < 20; i++)
	{
		cin >> number;
		if(find(arr.begin(),arr.end(),number) == arr.end())
			arr.push_back(number);
	}
	for(auto i:arr)
		cout << i << ' ';
	cout << '\n';
	return 0;
}
