//============================================================================
// Name        : H34086149_hw12_1.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<iomanip>
using namespace std;

const int students = 10;
const int tests = 3;

double average(const double [],const int);
void insertSort(double [][tests+2]);
void outputGrades(const double [][tests+2], int, int);
void outputBarChart(const double [][tests+2], int, int);

int main()
{
	double studentGrades[students][tests+2] = {
		{87, 96, 70},
		{68, 87, 90},
		{94, 100, 90},
		{100, 81, 82},
		{83, 65, 85},
		{78, 87, 65},
		{85, 75, 83},
		{91, 94, 100},
		{76, 72, 84},
		{87, 93, 73}
	};//多一格用來存平均
	for(int i = 0; i < students; i++)
	{
		studentGrades[i][tests] = average(studentGrades[i], tests);
		studentGrades[i][tests+1] = i + 1;
	}
	insertSort(studentGrades);
	outputGrades(studentGrades, students, tests + 1);
	return 0;
}
double average(const double setOfGrades[], const int gradeCount)
{
	int total = 0;
	for(int grade = 0; grade < gradeCount; grade++)
		total += setOfGrades[ grade ];

	return static_cast<double> (total) / gradeCount;
}
void insertSort(double grade[][tests+2])
{
	for(int i = 1; i < students; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(grade[j][tests] < grade[j-1][tests])
			{
				for(int k = 0; k < tests + 2; k++)
				{
					swap(grade[j][k],grade[j-1][k]);
				}
			}
			else break;
		}
	}
}
void outputGrades(const double grades[][tests+2], int pupils, int exams)
{
	cout << "\nThe grades are:\n\n";
	cout << "                                           ";
	cout << "Average\n";
	for(int student = 0; student < pupils; student++)
	{
		cout << "Student " << setw(2) << grades[student][tests+1];
		for(int test = 0; test < exams; test++)
			cout << setw(10) << grades[student][test];
		cout << '\n';
	}
}
/*void outputBarChart(const double grades[][tests+2], int pupils, int exams)
{
	cout << "\nOverall grade distribution:\n";
	const int frequencySize = 11;
	int frequency[frequencySize] = {};

}*/
