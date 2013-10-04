/*
 * Program: OneToTen.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 3, 2013
 */

/* Purpose: To create a repeating loop that asks the user
 *  to enter an integer from one to ten. Should the user enter
 *  anything other than an acceptable value, the program will
 *  continue.
 */

#include <iostream>
using namespace std;

int main () {
	int user_entry;
	do {
		cout << "Please enter an integer from 1 to 10." << endl;
		cin >> user_entry;
	} while (user_entry > 10 || user_entry < 1);

	cout << "Congrats.... you've followed directions! I'm sure this is a first for you. You should jump up and down for joy." << endl;
}


