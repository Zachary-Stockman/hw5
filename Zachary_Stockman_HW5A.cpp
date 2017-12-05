/*
Zachary Stockman
COP2000 6:35-9:00pm
11-28-17
Description: HW5A
A program that creates a bored game.
*/

#include <iostream>																						 //main library
#include <iomanip>																						 //library needed for fixed point notation thats used in the program
#include <cstdio>																						 //library needed for exit(0); thats used in the program
#include <string>
void checkForChampion(int a[]);
bool isInputValid(int b);
bool BoardsWon(int randomNum);
int AskforGuess(int GuessInput);
int beginGame(int playedBoard[]);
void displayBoard(int board[][3]);
bool testWinner(int ans, int boardNum, int ansBoard[]);
void instructions();
using namespace std;                                                                                     //required

int main()																								 //main function
{
	const int MAX_NUMBER_OF_GUESSES = 3;
	int guessesMade = 0;
	int randomNum,
		GuessInput;
	

	do{
		instructions();
		AskforGuess(GuessInput);
		guessesMade++;
	} while (guessesMade < MAX_NUMBER_OF_GUESSES);
	
	bool BoardsWon[3] = { false, false, false };
										// i have a random number from 0-2 or 1-3
	//displayBoard[randomNum] = 1;      // this would access the randomly selected board
	
	//if (isInputValid(GuessInput)) beginGame();
	//else exit(0);
									//Board "0" in C++
	int board1[4][3] = {38, 11, 83,
						15, 6, 33,
						10, 2, 20,
						86, NULL, 95};
	int board2[4][3] = {28, 10, 55,
						89, 17, 98,
						22, 4, 31,
						69, NULL, 78};
	int board3[4][3] = {90, 9, 45,
						66, 12, 48,
						34, 7, 70,
						44, NULL, 26};
	int ansArray[3] = { 14,15,8 };
	int usedBoards[3] = {NULL};
	
	//checkForChampion(BoardsWon);
	return 0;																			 				//ends program when done and returns to int main with zero saying everything has worked well.
}

bool isInputValid(int b)
{
	if (b >= 1) return true;
	else return false;
}
void checkForChampion(bool a[])
{
	bool BoardsWon;
	//if (BoardsWon[0] && BoardsWon[1] && BoardsWon[2] == true)
	{
		cout << "YOU ARE THE CHAMPION!!";
	}
}
int beginGame(int playedBoard[])
{
	int randomNum = (rand() % (2 - 0 + 1)) + 0;


	return randomNum;
}

int AskforGuess(int GuessInput)
{
	cout << "Enter Guess or 0 to Exit >> " << endl;
	cin >> GuessInput;
	if (GuessInput = 0)
	{
		cout << "Thank you for using the Missing Numbers Game!";
		exit(0);
	}

	return GuessInput;
}

void displayBoard(int board[][3])
{
	cout << displayBoard << endl;
}

bool testWinner(int ans, int boardNum, int ansBoard[])
{
	//check to see if the ans (which is the answer that the user entered) is equal to
	//the answer in the ansBoard
	
	
	
	return false;
}

//bool BoardsWon(int randomNum) =

void instructions()
{
	cout << "*****************************************************************" <<
		"                      MISSING NUMBERS GAME" << endl <<
		"                       A fun brain game" << endl << endl <<
		"   Please Enter a whole number to guess the missing number" << endl <<
		"             Program Developed by : Zachary Stockman" << endl <<
		"*****************************************************************" << endl;
}