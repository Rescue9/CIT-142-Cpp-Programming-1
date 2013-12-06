/*
 * CSCI 2490
 * Meghan E. Hembree
 * Wednesday, February 16, 2011, 10:00:00am
 *
 * Description: Write a hangman game that randomly
 * generates a word and prompts the user to guess one
 * letter at a time. Each letter in the word is displayed
 * in an asterisk. When the user finishes a word, display
 * the number of misses and ask the user whether to
 * continue for another word. Declare an array to store
 * words, as follows:
 *
 * // Use any words you wish.
 * string words[] = {"write", "that", ...};
 *
 */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


bool wordContainsLetter(string s1, char s2)
{
	int count = 0;

	for (int i = 0; i < s1.length(); i++)
	{
			if (s1[i] == s2)
				count++;
	}

	if(count > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	bool playAgain = false;
	int wrongLetter = 0;
	char yesOrNo;
	char userInput;
	string words[] = {"valentine", "roses", "hearts", "candies",
		"embrace", "february", "beautiful", "dating", "sweetheart",
		"kisses"};
	string hangmanWord = words[5];

	cout << "(Guess) Enter a letter in the following word: " ;

		for (int i = 0; i < hangmanWord.length(); i++)
					cout << "*";

	cout << " > ";
	cin >> userInput;

	while (playAgain = true)
	{
		for (int y = 0; y < hangmanWord.length(); y++)
		{
			cout << "(Guess) Enter a letter in the following word: ";

				for (int i = 0; i < hangmanWord.length(); i++)
					if (hangmanWord[i] == userInput)
						cout << hangmanWord[i];
					else
						cout << "*";

			cout << " > ";
			cin >> userInput;

			if (wordContainsLetter(hangmanWord, userInput) == false)
			{
				cout << "The word does not contain '" << userInput << "'." << endl;
				wrongLetter++;

			}
		}

		cout << "The word is: '" << hangmanWord << "'. You missed " << wrongLetter << " times." << endl;
		cout << endl;
		cout << "Do you want to play again? (Enter y or n) > ";
		cin >> yesOrNo;

		if (yesOrNo == 'y')
		{
			playAgain = true;
			hangmanWord = words[random()];
		}
		else
		{
			playAgain = false;
			return 0;
		}

	}
}







