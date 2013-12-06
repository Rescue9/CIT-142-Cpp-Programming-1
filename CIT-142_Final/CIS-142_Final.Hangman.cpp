/*
 * Program: CIS-142_Final.Hangman.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Dec 5, 2013
 */

/* Purpose: Create the video game hangman in the command prompt while meeting the following requirements:
 Require the user to input letters only. Allow upper or lower case letters.
 Randomly select between at least 5 words for the user to guess. Keep a theme (e.g. animals, foods, philosophers, etc).
 All words should be at least 5 characters.
 Display a message when the user incorrectly guesses a letter.
 Display a message when the user correctly guesses a letter.
 Display all previously guessed letters so the user doesn't guess them again.
 Allow the user to incorrectly answer 6 times before displaying a game over message. (head, body, arms, legs)
 Display a congratulations message if the user wins.
 Prompt the user to play again once their game is over.
 Display correctly guessed letters with Xs in place of the unguessed letters (e.g. ProXraXXinX = Programming with G and M unguessed)
 You don't have to draw the actual hanging man.
 *
 */

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cctype>

using namespace std;

string getRandomWord() {
	// get random number
	const int DIVISOR = 10;
	srand((unsigned) time(NULL));
	int randNum = rand() % DIVISOR;
	//int randNum = 5; //TODO Remove testing modifier

	// select word based upon random number with case
	string selectedWord;

	switch (randNum) {
	case 1:
		selectedWord = "TIGER";
		break;
	case 2:
		selectedWord = "LEOPARD";
		break;
	case 3:
		selectedWord = "ZEBRA";
		break;
	case 4:
		selectedWord = "GIRAFFE";
		break;
	case 5:
		selectedWord = "OTTER";
		break;
	case 6:
		selectedWord = "PENGUIN";
		break;
	case 7:
		selectedWord = "DOLPHIN";
		break;
	case 8:
		selectedWord = "MONKEY";
		break;
	case 9:
		selectedWord = "TURTLE";
		break;
	case 0:
		selectedWord = "SNAKE";
		break;
	}

	return selectedWord;

}

int getSelectedWordSize(string word) {
	int size = word.length();
	return size;
}

int main() {
	// TODO: REMOVE TESTING OUTPUT
	//cout << getRandomWord() << endl;
	//cout << getSelectedWordSize(getRandomWord()) << endl;

	// declarations & instances
	string hangWord = getRandomWord();
	char hiddenWord[hangWord.length()];
	string guessedLetters = "";
	char currentGuess;
	bool correctGuess = false;
	int guessCount = 0;

	cout << "Welcome to HANGMAN!" << endl;
	cout << "Your random word has been selected: " << endl;

	// display out word & X's
	for (int i = 0; i < hangWord.length(); i++) {
		cout << "*";
		hiddenWord[i] = '*';
	}

	// remove the trailing newline
	//hiddenWord[strlen(hiddenWord) - 1] = '\0';

	cin >> currentGuess;
	currentGuess = toupper(currentGuess);

	while (!correctGuess) {
		for (unsigned int y = 0; y < hangWord.length(); y++) {
			cout << endl;
			cout << "Enter a letter for the hidden word:  ";

			while (!isalpha(currentGuess)) {
				cout << "Numbers are not allowed. Please enter a letter only.";
				cin >> currentGuess;
				cin.get();
				currentGuess = toupper(currentGuess);
			}

			for (unsigned int i = 0; i < hangWord.length(); i++)
				if (hangWord[i] == currentGuess) {
					//cout << hangWord[i];
					hiddenWord[i] = currentGuess;
				}

			cout << hiddenWord;
			guessCount++;
			correctGuess = true;
			for (int i = 0; i < hangWord.length(); i++){
				if (hiddenWord[i] == '*'){
					correctGuess = false;
				}
			}

			if(correctGuess){
				cout << endl << "You've guessed the correct word! Congrats.";
				return 0;
			}
			if(guessCount >= 6){
				cout << endl << "You have used all your guesses. Epic fail.";
				return 0;
			}

			// add the current guess letter to the stack
			guessedLetters += currentGuess;
			// simple add a comma to stack
			guessedLetters += ',';

			cout << endl << "So far you've guessed: " << guessedLetters << endl;
			cin >> currentGuess;
			cin.get();
			currentGuess = toupper(currentGuess);
		}
	}
}
