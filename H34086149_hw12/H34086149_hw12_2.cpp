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
	int ctr = 0;//�s��X�Ӧr��
	while(true)
	{
		getline(cin,str);
		if(str.empty())//Ū��Ŧr��Nbreak
			break;
		for(int i = 0; i < str.size(); i++)//�]�L��Ӧr��
		{
			if( ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') )//if�j�gOR�p�g
				ctr++;
			else
			{
				if(ctr == 4)
				{
					if('A' <= str[i-4] && str[i-4] <='Z')//�P�_�Ĥ@�Ӧr���O���O�j�g
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
			if('A' <= str[str.size()-4] && str[str.size()-4] <='Z')//�P�_�Ĥ@�Ӧr���O���O�j�g
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
