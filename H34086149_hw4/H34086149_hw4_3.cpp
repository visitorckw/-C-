//============================================================================
// Name        : H34086149_hw4_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : 這是我自己leetcode第9題AC的程式碼,輸入限制為int範圍
//============================================================================

#include <iostream>
using namespace std;

int x,temp;
long int rev = 0;//儲存倒轉後的數字,以long int宣告避免輸入任意位數時倒轉後可能超過int範圍
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
