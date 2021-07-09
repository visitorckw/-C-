//============================================================================
// Name        : H34086149_hw13_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double data[12][2];
void getData()
{
	for(int i = 0; i < 12; i++)
	{
		cout << "Please input the highest temperature of " << i + 1 << " month\n";
		cin >> data[i][0];
		cout << "Please input the lowest temperature of " << i + 1 << " month\n";
		cin >> data[i][1];
	}
}
double averageHigh()
{
	double sum = 0.0;
	for(int i = 0; i < 12; i++)
		sum += data[i][0];
	return sum / 12.0;
}
double averageLow()
{
	double sum = 0.0;
	for(int i = 0; i < 12; i++)
		sum += data[i][1];
	return sum / 12.0;
}
unsigned int indexHighTemp()
{
	unsigned int index = 0;
	double max = data[0][0];
	for(int i = 1; i < 12; i++)
	{
		if(data[i][0] > max)
		{
			index = i;
			max = data[i][0];
		}
	}
	return index;
}
unsigned int indexLowTemp()
{
	unsigned int index = 0;
	double min = data[0][1];
	for(int i = 1; i < 12; i++)
	{
		if(data[i][1] < min)
		{
			index = i;
			min = data[i][1];
		}
	}
	return index;
}
int main()
{
	getData();
	cout << "averageHigh = " << averageHigh() << '\n';
	cout << "averageLow = " << averageLow() << '\n';
	cout << "The index of the highest month = " << indexHighTemp() << '\n';
	cout << "The index of the lowest month = " << indexLowTemp() << '\n';
	return 0;
}
