//============================================================================
// Name        : H34086149_hw12.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main()
{
	string str;
	int ctr = 0;//連續幾個字母
	while(true)
	{
		getline(cin,str);
		if(str.empty())//讀到空字串就break
			break;
		for(int i = 0; i < str.size(); i++)//跑過整個字串
		{
			if( ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') )//if大寫OR小寫
				ctr++;
			else
			{
				if(ctr == 4)
				{
					if('A' <= str[i-4] && str[i-4] <='Z')//判斷第一個字母是不是大寫
						str[i-4] = 'L';
					else
						str[i-4] = 'l';

					str[i-3] = 'o';
					str[i-2] = 'v';
					str[i-1] = 'e';
				}

				ctr = 0;
			}
		}
		if(ctr == 4)
		{
			if('A' <= str[str.size()-4] && str[str.size()-4] <='Z')//判斷第一個字母是不是大寫
				str[str.size()-4] = 'L';
			else
				str[str.size()-4] = 'l';

			str[str.size()-3] = 'o';
			str[str.size()-2] = 'v';
			str[str.size()-1] = 'e';
		}
		cout << str + "\n";
	}
	return 0;
}
