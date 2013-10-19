/*
 * Program: BackwardsName.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 19, 2013
 */

/* Purpose: Write a program that accepts your first name into a
 *  character array string variable. Print your name backward.
 */

#include <iostream>
using namespace std;

string reverseOrder(string input) {
	string output;
	for (int i = input.length() - 1; i >= 0; i--) {
		output += input[i];;
	}
	return output;
}

int main() {
	// get users name
	cout << "Please enter your first name.";
	string input;
	cin >> input;

	// print out the users name
	cout << "Your name spelled in reverse is " << reverseOrder(input) << ".";
}
