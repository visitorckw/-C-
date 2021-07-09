#include<bits/stdc++.h>
#include<windows.h>//必須先加入此標頭檔
using namespace std;

int year;
int x = 0, y = 0;

void gotoxy(int xpos, int ypos)
{
  	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}
int w(int m, int d)
{
	if(m <= 2)
	{
		m += 12;
		year--;
	}
	int y = year % 100;
	int c = year;
	while(c > 100)
		c /= 10;
	int week;
	week = y + y / 4 + c / 4 - 2 * c + (26 * (m+1)) / 10 + d - 1;
	year++;
	return (week % 7 + 7) % 7;
}
int days(int month)
{
	switch(month)
	{
		case 1:
			return 31;
		case 2:
			if(!(year%4))
			{
				if(!(year%100))
				{
					if(!(year%400))
						return 29;
					return 28;
				}
				return 29; 
			}
			return 28;
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		case 12:
			return 31;
	}
	return -1;
}
void endline()
{
	y++;
	gotoxy(x,y);
}
void cal()
{
	cout << setw(37) << year;
	int m, start;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			m = i * 3 + j + 1;
			x = 24 * j;
			y = 8 * i + 3;
			gotoxy(x,y);
			cout << "      " << m << " month";
			endline();
			cout << "  S  M Tu  W Th  F  S";
			endline();
			start = w(m, 1);
			for(int k = 0; k < 3*start; k++)
				cout << ' ';
			for(int k = 1; k <= days(m); k++,start++)
			{
				if(start >= 7)
				{
					start = 0;
					endline();
				}
				cout << setw(3) << k;
			}
		}
	}
}
int main()
{
	cout << "Please input the year: ";
	cin >> year;
	cal();
	return 0;
}