//============================================================================
// Name        : H34086149_hw1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int weight;
	double high;
	cout << "�п�J�魫(����):\n";
	while(cin >> weight){
		if(weight < 0) cout << "�魫�����������!!!\n"; //�P�_��J����O�t��
		else break;
	}
	cout<<"�п�J����(����):\n";
	while(cin >> high){
		if(high < 0.0) cout << "���������j��0!!!\n"; //�P�_��J����O�t��
		else break;
	}
	const double bmi = weight/(high*high);
	cout << "BMI = " << bmi << '\n';
	if(bmi < 18.5) cout << "�魫�L��!!�h�Y�d�]\n";
	else if(bmi > 25.0) cout << "�魫�L��!!�Ӵ�ηS\n";
	else cout << "�魫�A��,�~��O��!!\n";
	return 0;
}
