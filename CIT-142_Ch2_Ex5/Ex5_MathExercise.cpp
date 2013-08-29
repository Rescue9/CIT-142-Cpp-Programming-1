/*
 * Program: MathExercise.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Aug 29, 2013
 */

/* To allow a user to enter two values & display the results
 * of various operations performed on said values
 */

#include <iostream>
using namespace std;

int main() {

	// declare variables
	double firstValue;
	double secondValue;

	// allow user to enter values
	cout << "We will enter two values and perform various calculations on them." << endl;
	cout << "Please enter the first number of your choosing: " << endl;
	cin >> firstValue;
	cout << "Please enter the second number of your choosing: " << endl;
	cin >> secondValue;

	// perform various calculations & display results
	cout << "Addition: " << firstValue << " + " << secondValue << " = " << firstValue + secondValue << endl;
	cout << "Subtraction: " << firstValue << " - " << secondValue << " = " << firstValue - secondValue << endl;;
	cout << "Multiplication: " << firstValue << " * " << secondValue << " = " << firstValue * secondValue << endl;
	cout << "Division: " << firstValue << " / " << secondValue << " = " << firstValue / secondValue << endl;

	return 0;
}



