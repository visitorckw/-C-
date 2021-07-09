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
	cout << "請輸入體重(公斤):\n";
	while(cin >> weight){
		if(weight < 0) cout << "體重必須為正整數!!!\n"; //判斷輸入不能是負數
		else break;
	}
	cout<<"請輸入身高(公尺):\n";
	while(cin >> high){
		if(high < 0.0) cout << "身高必須大於0!!!\n"; //判斷輸入不能是負數
		else break;
	}
	const double bmi = weight/(high*high);
	cout << "BMI = " << bmi << '\n';
	if(bmi < 18.5) cout << "體重過輕!!多吃宵夜\n";
	else if(bmi > 25.0) cout << "體重過重!!該減肥惹\n";
	else cout << "體重適中,繼續保持!!\n";
	return 0;
}
