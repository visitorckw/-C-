//============================================================================
// Name        : H34086149_hw9_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include<climits>
using namespace std;

/*long long f(long long int n)
{
	if(n <= 1)
		return n;
	return f(n-1) + f(n-2);
}*/

void f_int()
{
	long long int pre1 = 0;
	long long int pre2 = 1;
	long long int now;
	cout << "第 0 項為 0\n";
	cout << "第 1 項為 1\n";
	for(int i = 2;; i++)
	{
		now = pre1 + pre2;
		if(now > INT_MAX)
			break;
		cout << "第 " << i << " 項為 " << now << '\n';
		pre1 = pre2;
		pre2 = now;
	}
}

void f_double()
{
	double pre1 = 0;
	double pre2 = 1;
	double now;
	cout << "第 0 項為 0\n";
	cout << "第 1 項為 1\n";
	for(int i = 2;; i++)
	{
		now = pre1 + pre2;
		if(isinf(now))
			break;
		cout << "第 " << i << " 項為 " << now << '\n';
		pre1 = pre2;
		pre2 = now;
	}
}

int main()
{
	f_int();
	f_double();
	return 0;
}

