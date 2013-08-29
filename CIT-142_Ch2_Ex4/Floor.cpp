/*
 * Program: Floor.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Aug 29, 2013
 */

/* Calculate the estimated cost for installing flooring */

#include <iostream>
using namespace std;

int main () {

	// declare variables
	double installationHours;
	int installationDays;
	const int RATE_PER_DAY = 200;
	const int RATE_PER_HOUR = 40;
	double totalCost;

	// get user input
	cout << "How many complete days will it take to install flooring? " << endl;
	cin >> installationDays;
	cout << "How many additional hours will be needed on the last day? " << endl;
	cin >> installationHours;

	// calculate & display
	totalCost = (installationDays * RATE_PER_DAY) + (installationHours * RATE_PER_HOUR);
	cout << "The total estimated cost to install said flooring is " << totalCost << "." << endl;

	return 0;
}




