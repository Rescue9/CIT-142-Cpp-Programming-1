/*
 * Program: LoopingGuessingGame.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 5, 2013
 */

/* Purpose: Write a program that generates a random number from 1 to 100.
 *  After each guess, display a message that lets the user know if their guess
 *  is too high, low, or correct. Allow the user to play until the number
 *  is guess correctly, then display the number of guesses it took.
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {

	const int DIVISOR = 100;
	const bool DEBUG = false;

	// Give directions to the user
	cout << "Let's play a little game...." << endl;
	cout << "I'll pick a random number." << endl;
	cout << "You try to guess that number." << endl;
	cout << "Each time I'll tell you whether my number is higher, or lower than your guess." << endl;
	cout << "Let's begin. I've chosen my number, so enter your first guess: " << endl;

	// generate our random number (from 1 to 100)
	// reset initial count
	int computer_random;;
	int guess_count = 1;
	srand((unsigned) time(NULL));
	computer_random = rand() % DIVISOR;

	if (DEBUG){
		cout << "DEBUG: comptuer_random =" << computer_random << endl;
	}

	int users_number;

	// create while do loop until number is correctly chosen
	do {
		// get a number
		cin >> users_number;
		cout << "Your current guess is: " << users_number << endl;


		// create if loops for higher & lower
		if (users_number < computer_random) {
			cout << "My number is Higher than yours." << endl;
			guess_count++;

		}

		if (users_number > computer_random) {
			cout << "My number is Lower than yours." << endl;
			guess_count++;
		}

	} while (users_number != computer_random);

	cout << "You guessed it!" << endl;
	cout << "It took you " << guess_count << " guesses to get the number I picked." << endl;

}

