//============================================================================
// Name        : H34086149_hw4_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : �o�O�ڦۤvleetcode��9�DAC���{���X,��J���int�d��
//============================================================================

#include <iostream>
using namespace std;

int x,temp;
long int rev = 0;//�x�s����᪺�Ʀr,�Hlong int�ŧi�קK��J���N��Ʈɭ����i��W�Lint�d��
bool isPalindrome(const int &x) {
        if(x < 0) return false;
        if(!(x/10)) return true;
        temp = x;
        while(temp)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return rev == x;
    }
int main() {
	cin >> x;
	if(isPalindrome(x))
	{
		cout << "The number is a palidrome\n";
		return 0;
	}
	cout << "The number is NOT a palidrome\n";
	return 0;
}
