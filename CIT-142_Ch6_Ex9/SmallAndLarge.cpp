/*
 * Program: SmallAndLarge.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 1, 2013
 */


/* Purpose: Write a program that accepts 10 values from the user at the keyboard and stores them in
 an array. Pass the array and its size to a function that determines and displays the smallest
 and largest of the 10 values. Save the file as SmallAndLarge.cpp. */


#include <iostream>
using namespace std;

int main(){
	// TODO: Change debug to false for production
	const bool DEBUG = false;
	cout << "Please enter 10 separate values." << endl;
	const int SIZE = 10;
	double values[SIZE];
	for (int i=0; i<SIZE; i++){
		cout << "Value: ";
		cin >> values[i];
	}

	//TODO: used for testing
	if (DEBUG) {
		for (int i = 0; i < 10; i++) {
			cout << values[i] << endl;
		}
	}

	double findSmallest(double[], int);
	double findLargest(double[], int);


	cout << "The smallest number is: " << findSmallest(values, SIZE) << endl;
	cout << "The largest number is: " << findLargest(values, SIZE) << endl;

}
