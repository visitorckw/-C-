//============================================================================
// Name        : H34086149_hw13_challenge1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool f(const string &str, const int head, const int tail)
{
	if(str[head] != str[tail])
		return false;
	if(head >= tail)
		return true;
	return f(str, head + 1, tail - 1);
}
int main()
{
	string str;
	cin >> str;
	if( f(str, 0, str.size()-1) )
		cout << "The string is a palindrome\n";
	else
		cout << "The string is not a palindrome\n";
	return 0;
}
