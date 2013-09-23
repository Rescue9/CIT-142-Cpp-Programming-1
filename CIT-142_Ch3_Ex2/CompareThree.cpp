/*
 * Program: CompareThree.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Sep 22, 2013
 */

/*
 * Purpose: Allow user to enter two DOUBLE numbers & determine
 * if those numbers are equal, or if the first is smaller / larger
 * than the second
 */


#include <iostream>
using namespace std;

int main() {
	// print message and gather two DOUBLE numbers from user
	cout << "Please enter two double numbers:" << endl;
	double number1;
	cin >> number1;
	double number2;
	cin >> number2;;

	// if loop to determine which is greater
	if (number1 == number2){
		cout << "The numbers are equal.";
	} else if (number1 < number2) {
		cout << "Number 1 (" << number1 << ") is less than number 2 (" << number2 <<")." << endl;
	} else {
		cout << "Number 1 (" << number1 << ") is greater than number 2 (" << number2 <<")." << endl;
	}
}
