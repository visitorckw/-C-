//============================================================================
// Name        : H34086149_hw9_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if(!y)
		return x;
	return gcd(y, x%y);
}
/*
int gcd(int &x, int &y)
{
	while( x %= y && y %= x );
	return x + y;
}
*/
int main()
{
	int x, y;
	cout << "Please input 2 numbers\n";
	cin >> x >> y;
	if(y > x)
		swap(x,y);
	cout << gcd(x,y) << '\n';
	return 0;
}

