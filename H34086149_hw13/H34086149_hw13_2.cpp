//============================================================================
// Name        : H34086149_hw13_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define arraySize 100
using namespace std;

unsigned int linearSearch(const int [], const int, const unsigned int);

int main()
{
	int arr[arraySize];
	int searchKey;

	for(int i = 0; i < arraySize; i++)
		arr[i] = (i << 1);

	cin >> searchKey;
	const int element = linearSearch(arr, searchKey, 0);
	if(element != -1)
		cout << "Found value in element " << element << '\n';
	else
		cout << "Value not found\n";
	return 0;
}

unsigned int linearSearch(const int arr[],const int key, const unsigned int index)
{
	if(index >= arraySize)
		return -1;
	if(arr[index] == key)
		return index;
	return linearSearch(arr, key, index + 1);
}
