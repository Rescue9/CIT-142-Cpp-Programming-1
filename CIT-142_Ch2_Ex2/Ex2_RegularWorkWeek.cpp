/*
 * Program: RegularWorkWeek.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Aug 29, 2013
 */

/* To correctly calculate an employees' pay for one 40 work week */

#include <iostream>
using namespace std;

int main() {

	// declare our variables
	double employeePay;
	const double HOURS_PER_WORK_WEEK = 40;

	// get user input
	cout << "Please enter your hourly pay rate: ";
	cin >> employeePay;

	// perform calc & display
	cout << " Your standard weekly pay is: " << employeePay * HOURS_PER_WORK_WEEK << "." << endl;;

	return 0;
}




