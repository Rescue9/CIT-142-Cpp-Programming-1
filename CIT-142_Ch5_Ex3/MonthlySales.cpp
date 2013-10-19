/*
 * Program: MonthlySales.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 19, 2013
 */

/* Purpose: To create a program that allows a user to enter
 *  twelve different double numbers which represent monthly sales
 *  for each month of the year. After all twelve values are
 *  entered, the program will display each value with a statement
 *  declaring whether the monthly values were higher, lower, or
 *  equal to the monthly average for the year.
 */

#include <iostream>
using namespace std;

string monthlyRank(double monthlySale, double monthlyAverage) {
	string rank;
	if (monthlySale < monthlyAverage) {
		rank = "lower than the monthly average.";
	} else if (monthlySale == monthlyAverage) {
		rank = "equal to the monthly average.";
	} else {
		rank = "higher than the monthly average.";
	}

	return rank;
}

int main() {

	// declare variables
	int monthlySalesSize = 12;
	double yearlySales;
	double monthlyAverage;
	double monthlySale[monthlySalesSize];;

	// inform user of directions & get input
	cout
			<< "Please enter twelve double values, each representing a monthly sales amount: ";
	for (int i = 0; i < monthlySalesSize; i++) {
		cin >> monthlySale[i];
		cout << "Next Value: ";
		yearlySales += monthlySale[i];
	}

	// find monthly average
	monthlyAverage = yearlySales / monthlySalesSize;

	// output the monthly sales & indicate whether said sale is
	// higher, lower, or equal to the monthly average
	cout << endl << endl;
	cout << "The monthly average is: " << monthlyAverage << endl;
	for (int i=0; i < monthlySalesSize; i++) {
		cout << i+1 << ": " << monthlySale[i] << " is " << monthlyRank(monthlySale[i], monthlyAverage) << endl;;
	}

}


