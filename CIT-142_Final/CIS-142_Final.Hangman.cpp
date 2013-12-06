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
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cctype>

using namespace std;

string getRandomWord(){
	// get random number
	const int DIVISOR = 10;
	srand((unsigned) time(NULL));
	//int randNum = rand() % DIVISOR;
	int randNum = 1; //TODO Remove testing modifier

	// select word based upon random number with case
	string selectedWord;

	switch (randNum){
	case 1: selectedWord = "Tiger"; break;
	case 2: selectedWord = "Leopard"; break;
	case 3: selectedWord = "Elephant"; break;
	case 4: selectedWord = "Zebra"; break;
	case 5: selectedWord = "Giraffe"; break;
	case 6: selectedWord = "Otter"; break;
	case 7: selectedWord = "Penguin"; break;
	case 8: selectedWord = "Dolphin"; break;
	case 9: selectedWord = "Monkey"; break;
	case 0: selectedWord = "Flamingo"; break;
	}

	return selectedWord;

}

int getSelectedWordSize(string word){
	int size = word.length();
	return size;
}

int main (){
	// TODO: REMOVE TESTING OUTPUT
	cout << getRandomWord() << endl;
	cout << getSelectedWordSize(getRandomWord()) << endl;

	// declarations & instances
	string hangWord = getRandomWord();
	string hiddenWord = "";
	string guessedLetters = "";
	char currentGuess;


	cout << "Welcome to HANGMAN!" << endl;
	cout << "Your random word has been selected: " << endl;

	// display out word & X's
	for(unsigned int i = 0; i < hangWord.length(); i++){
		cout << "*";
		hiddenWord += "*";
	}

	cout << "It's time to guess. I'll keep track of each letter you've guessed. Make your first guess now." << endl;
	cin >> currentGuess;

	while (!isalpha(currentGuess)){
		cout << "Numbers are not allowed. Please enter a letter only.";
		cin >> currentGuess;
	}
	// add current guess to guessed letters
	cout << currentGuess;

}
