/*
 * Program: SpareChange.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Aug 22, 2013
 */

/* Purpose: To create a program that will take
 * a double variable representing the money in
 * my pocket. The program will then output the
 * amount to the screen.
 */

#include <iostream>
using namespace std;

int main(){
	double pocketAmount;
	cout << "Enter the amount of change you have in your pocket right now. ";
	cin >> pocketAmount;
	cout << endl;
	cout << "I currently have $" << pocketAmount << " in my pocket.";
	cout << endl;

	return 0;
}
