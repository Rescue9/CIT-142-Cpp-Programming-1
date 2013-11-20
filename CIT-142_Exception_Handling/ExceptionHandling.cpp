/*
 * Program: ExceptionHandling.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 20, 2013
 */


/* Purpose: 1. Read through this tutorial: http://www.functionx.com/cpp/Lesson18.htm

 2. Using what you've learned about exception handling, write a program that does the following: (30 points)

 Prompts the user for their first name, last name, age, and weight.
 Check if the weight and age are above zero
 Display a message to the user if they input incorrect data
 Exit the program gracefully without it freezing
 */

#include <iostream>
using namespace std;

// check for good age
bool positiveAge(int _age){
	int agePositive = false;
	if (_age > 0){
		agePositive = true;
	}

	return agePositive;
}

// Check for good weight
bool positiveWeight(double _weight){
	int weightPositive = false;
	if (_weight > 0){
		weightPositive = true;
	}

	return weightPositive;
}

int main(){
	// declarations
	string firstName;
	string lastName;
	int age;
	double weight;

	// get user name
	cout << "Please enter your first name: " << endl;
	cin >> firstName;
	cout << "Please enter your last name: " << endl;
	cin >> lastName;

	// get user age and weight
	cout << "Please enter your age: " << endl;
	cin >> age;
	cout << "Please enter your weight: " << endl;
	cin >> weight;

	// try/catch our program with a useful error message.
	try {
		if (!positiveAge(age))
			throw "Your age must be an integer greater than 0!";
		if (!positiveWeight(weight))
			throw "Your weight must be a double greater than 0!";

		cout << "You are " << firstName << " " << lastName << " who is " << age << " years old and weighs " << weight << " lbs.";

	} catch (const char* c) {
		cout << "Operation ERROR: " << c;
	}

}
