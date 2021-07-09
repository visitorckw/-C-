//============================================================================
// Name        : H34086149_hw6_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : 5.34
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

int ans, guess;
char playAgain;

int main() {
	srand((unsigned int) time(NULL));
	do
	{
		ans = rand() % 1000 + 1;
		cout << "I have a number between 1 and 1000.\n";
		cout << "Can you guess my number?\n";
		cout << "Please type your first guess.\n";
		while(cin >> guess)
		{
			if(guess > ans)
				cout << "Too high. Try again.\n";
			else if(guess < ans)
				cout << "Too low. Try again.\n";
			else
			{
				cout << "Excellent! You guessed the number!\n";
				cout << "would you like to play again (y or n)?\n";
				cin >> playAgain;
				break;
			}
		}
	}while(playAgain == 'y');
	return 0;
}
