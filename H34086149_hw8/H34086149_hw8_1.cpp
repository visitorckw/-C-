//============================================================================
// Name        : H34086149_hw6_3.cpp
// Author      : mr.NTD
// Version     :
// Copyright   : Your copyright notice
// Description : 5.34
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ans, guess, ctr = 0;
char playAgain;

enum status{lucky, knowSecret, doBetter};
status gameStatus;

int main() {
	srand((unsigned int) time(NULL));
	do
	{
		ans = rand() % 1000 + 1;
		cout << "I have a number between 1 and 1000.\n";
		cout << "Can you guess my number?\n";
		cout << "Please type your first guess.\n";
		ctr = 0;
		while(cin >> guess)
		{
			ctr++;
			if(guess > ans)
				cout << "Too high. Try again.\n";
			else if(guess < ans)
				cout << "Too low. Try again.\n";
			else
			{
				cout << "Excellent! You guessed the number!\n";
				cout << "You guess " << ctr << " times\n";
				if(ctr < 10)
					gameStatus = lucky;
				else if(ctr == 10)
					gameStatus = knowSecret;
				else
					gameStatus = doBetter;
				switch(gameStatus)
				{
					case lucky:
						cout << "Ahah! You know the secret!\n";
						break;
					case knowSecret:
						cout << "Either you know the secret or you got lucky\n";
						break;
					default:
						cout << "You should be able to do better!\n";
						break;
				}
				cout << "Would you like to play again (y or n)?\n";
				cin >> playAgain;
				break;
			}
		}
	}while(playAgain == 'y');
	return 0;
}
