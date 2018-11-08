/*******************************************************
	IEEE C++ CODING HANGMAN WORKSHOP | 11/08/2018

*******************************************************/
// File: Hangman_solution.cpp

// directives
#include <iostream>
#include <string>
using namespace std;


// constants (cannot be changed inside program)
const char WORD[] = { 'c','y','b','e','r' };
const int TOTAL_NUM = 5;


// function prototype
void print_display();	// written for 5 attempts

void user_guess();		// WRITE THIS!
bool update_game();		// WRITE THIS!


// global variables (can be changed inside program)
int NUM_CORRECT = 0;
int NUM_WRONG = 0;
char CORRECT[] = "";
char WRONG[] = "";


// main function
int main()
{
	// Some greeting to welcome the user
	cout << "\tWelcome to the GAME!" << endl;

	// Tell the user how many letters are in the word
	cout << "\n\n============================================\n";
	cout << "\t\tHANGMAN GAME\n";
	cout << "============================================\n";
	cout << "\tThere are " << TOTAL_NUM << " letters in the word!" << endl;

	/* (First write the functions, then come back here.... )
	Loop for user to keep playing until word is complete!*/
	bool game_over = update_game();
	while (game_over == false)
	{
		print_display();
		user_guess();
		game_over = update_game();
	}

	// Tell user the game is over
	cout << "\n\n============================================\n";
	cout << "GAME OVER!!! Thanks for playing!" << endl;
	cout << "The word was \"" << WORD << "\"" << endl;
	cout << "============================================\n";

	//system("pause");
	return 0; // success
}

/*********************************************************************
Purpose: to handle user attempts
1. get input from the user
2. check if input is correct guess
3. update correct or wrong array

(( CHALLENGE A1: use parameters to pass in values ))
**********************************************************************/
void user_guess()
{
	// First ask user for input
	char input;
	cout << "\tReady? Guess a letter: ";
	cin >> input;

	// Next loop to check if input was a previous wrong guess
	int i = 0;
		while (i < NUM_WRONG)
		{
			if (input == WRONG[i])
			{
				cout << "\tSORRY. YOU ALREADY GUESSED THAT!" << endl << endl;
				user_guess();

				return;
			}
			else
			{
				i++;
			}
		}

	// Last loop check if this is a letter in the word 
	//			(yes, add to correct. no, add to wrong)
	int j = 0;
		while (j < TOTAL_NUM)
		{
			if (input == WORD[j])
			{
				cout << "\tYOU FOUND ONE!" << endl << endl;
				CORRECT[NUM_CORRECT] = input;
				NUM_CORRECT++;

				break;
				//	(( CHALLENGE B: find if there are repeated letters, 
				//					tell user how many ))
			}
			else
			{
				j++;
			}
		}

	if (j == TOTAL_NUM)
	{
		cout << "\tSORRY. WRONG GUESS :(" << endl << endl;
		WRONG[NUM_WRONG] = input;
		NUM_WRONG++;
	}

}


/*********************************************************************
Purpose: to print out updated blanks with correct guesses
1. check if wrong attempts matches total number
(limited by hangman print)
2. check if no wrong guesses
3.
Return:	true (game is over) or false (game not over)

(( CHALLENGE A2: use parameters to pass in values ))
**********************************************************************/
bool update_game()
{
	bool game_over = true;

	// First check if the number of wrong attempts reached the max
	if (NUM_WRONG == TOTAL_NUM+1)
		game_over = true;

	// Next check if no wrong attempts, loop to print blanks
	else if (NUM_CORRECT == 0)
	{
		cout << "\t";

		for (int i = 0; i < TOTAL_NUM; i++)
		{
			cout << " _ ";
			game_over = false;			
		}
		return game_over;
	}

	// Last nested loop to print blanks or correctly guessed letter
	else
	{
		cout << "\t";

		// nested loop to check (one char in word) with (all of the correct guesses)
		for (int i = 0; i < TOTAL_NUM; i++)
		{
			for (int j = 0; j < NUM_CORRECT; j++)
			{
				if (WORD[i] == CORRECT[j])
				{
					cout << WORD[i];
					break;
				}

				if (j == NUM_CORRECT - 1)
				{
					cout << " _ ";
					game_over = false;
				}

			}
		}
	}

	// Return if game is over ( you can return this during the earlier checks too )
	return game_over;

}

/*********************************************************************
Purpose: to print out updated hangman based on attempt number

(( CHALLENGE A3: use parameters to pass in values ))
**********************************************************************/
void print_display()	/*void print_display(int total_wrong)*/
{

	//	(( CHALLENGE D: take a different number of wrong attempts ))

	int total_wrong = NUM_WRONG;
	
	cout << "\n\t_____________\n";
	cout << "\t| __________|\n";

	if (total_wrong ==0)	// print empty hangman
	{
		cout << "\t||         J \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";

	}
	else if(total_wrong ==1)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";
	}
	else if(total_wrong == 2)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||       |//| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";
	}
	else if (total_wrong == 3)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||    <--|//| \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";
	}
	else if (total_wrong == 3)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||    <--|//|--> \n";
		cout << "\t|| \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n\n";
		cout << "********************************************\n";
	}
	else if (total_wrong == 3)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||    <--|//|--> \n";
		cout << "\t||       // \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|";
		cout << "********************************************\n";
	}
	else if (total_wrong == 4)
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||    <--|//|--> \n";
		cout << "\t||       //\\\\ \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";
	}
	else // out of attempts
	{
		cout << "\t||      __J__ \n";
		cout << "\t||     (x _ x) \n";
		cout << "\t||    <--|//|--> \n";
		cout << "\t||       //\\ \n";
		cout << "\t||      ##  ## \n";
		cout << "\t|| \n";
		cout << "\t||______________\n";
		cout << "\t|//////////////|\n";
		cout << "********************************************\n";
	}

}