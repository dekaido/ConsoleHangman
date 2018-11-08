/*******************************************************
	IEEE C++ CODING HANGMAN WORKSHOP | 11/08/2018

*******************************************************/
// File: Hangman_template.cpp

// directives
#include <iostream>
#include <string>
using namespace std;


// constants (cannot be changed inside program)
const char WORD[] = { 'h','e','l','l','o' };
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
	cout << "Hello World" << endl;

	// Tell the user how many letters are in the word


	/* (First write the functions, then come back here.... )
	Loop for user to keep playing until word is complete!*/


	// Tell user the game is over


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

	// Next loop to check if input was a previous wrong guess
	

	// Last loop check if this is a letter in the word 
	//			(yes, add to correct. no, add to wrong)

	//	(( CHALLENGE B: find if there are repeated letters, tell user how many ))

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
	// First check if the number of wrong attempts reached the max

	// Next check if no wrong attempts, loop to print blanks

	// Last nested loop to print blanks or correctly guessed letter


	// Return if game is over ( you can return this during the earlier checks too )

}

/*********************************************************************
 Purpose: to print out updated hangman based on attempt number

	 (( CHALLENGE A3: use parameters to pass in values ))
**********************************************************************/
void print_display()
{

	//	(( CHALLENGE D: take a different number of wrong attempts ))

	int total_wrong = NUM_WRONG;

	cout << "\n\t_____________\n";
	cout << "\t| __________|\n";

	if (total_wrong == 0)	// print empty hangman
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
	else if (total_wrong == 1)
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
	else if (total_wrong == 2)
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