/*
 * Program: Floor.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Aug 29, 2013
 */

/* Calculate the estimated cost for installing flooring */

#include <iostream>
using namespace std;

int main() {

	// declare variables
	int installationHours;
	int installationDays;
	int remainingInstallationHours;
	const int RATE_PER_DAY = 200;
	const int RATE_PER_HOUR = 40;
	double totalCost;

	// get user input
	cout << "How many complete hours will it take to install flooring? "
			<< endl;
	cin >> installationHours;

	// calculate time
	installationDays = installationHours / 8;
	remainingInstallationHours = installationHours % 8;

	// calculate price & display
	totalCost = (installationDays * RATE_PER_DAY)
			+ (remainingInstallationHours * RATE_PER_HOUR);
	cout << "The total estimated cost to install said flooring is " << totalCost
			<< "." << endl;;
	cout << "This is calculated a $200/day (" << installationDays
			<< ") and $40/additional hour (" << remainingInstallationHours
			<< ")." << endl;

	return 0;
}

