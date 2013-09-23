/*
 * Program: Furniture.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Sep 22, 2013
 */

/* Purpose: Ask the user to choose P for pine, O for oak, or
 * M for mahogany. Show the price of a table manufactured with the chosen wood. Pine
 * tables cost $100, oak tables cost $225, and mahogany tables cost $310.
 */

#include <iostream>
using namespace std;

int main() {
	// ask user which type of wood to use
	cout << "Which type of wood would you like to use?" << endl;
	cout << "Press P for pine, O for oak, or M for mahogany: " << endl;
	char woodInput;
	int woodCost;
	cin >> woodInput;

	// match the wood to the users input
	string woodType;
	switch (woodInput){
	case 'P':
		woodType = "Pine";
		woodCost = 100;
		break;

	case 'O':
		woodType = "Oak";
		woodCost = 225;
		break;

	case 'M':
		woodType = "Mahogany";
		woodCost = 310;
		break;

	case 'p':
		woodType = "Pine";
		woodCost = 100;
		break;

	case 'o':
		woodType = "Oak";
		woodCost = 225;
		break;

	case 'm':
		woodType = "Mahogany";
		woodCost = 310;
		break;

	default:
		cout << "You didn't indicate one of the available choices." << endl;
		return 0;;
	}

	// print out users choice and price
	cout << "You indicated that you would like a " << woodType << " table." << endl;
	cout << "The cost of a table made in " << woodType << " is " << woodCost << "." << endl;
}

