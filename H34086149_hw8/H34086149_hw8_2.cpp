//============================================================================
// Name        : H34086149_hw8_2.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int bankBalance = 1000, wager;

int main() {
	enum Status { CONTINUE, WON, LOST};
	int myPoint;
	Status gameStatus;
	srand((unsigned int) time(NULL));
	while(true)
	{
		cout << "Please input the wager\n";
		if(bankBalance > 2000)
			cout << "You're up big. Now's the time to cash in your chips!\n";
		cin >> wager;
		while(wager > bankBalance)
		{
			cout << "You should not bet more than bankBalance!!\n";
			cout << "Please input the wager\n";
			cin >> wager;
		}
		if(wager < 100)
			cout << "Aw cmon, take a chance!\n";
		int sumOfDice = rollDice();
		switch(sumOfDice)
		{
			case 7:
			case 11:
				gameStatus = WON;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = LOST;
				break;
			default:
				gameStatus = CONTINUE;
				myPoint = sumOfDice;
				cout << "Point is " << myPoint << '\n';
				break;
		}
		while(gameStatus == CONTINUE)
		{
			sumOfDice = rollDice();

			if(sumOfDice == myPoint)
				gameStatus = WON;
			else if(sumOfDice == 7)
				gameStatus = LOST;
		}
		if(gameStatus == WON)
		{
			cout << "Player wins\n";
			bankBalance += wager;
		}
		else
		{
			cout << "Player loses\n";
			bankBalance -= wager;
			if(rand()&1)
				cout << "Oh, you are going for broke , huh?\n";
		}
		cout << "You have " << bankBalance << " in your bankBalance\n";
		if(!bankBalance)
		{
			cout << "Sorry. You Busted!\n";
			return 0;
		}
	}
	return 0;
}
int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "PLayer rolled " << die1 << " + " << die2 << " = " << sum << '\n';
	return sum;
}
