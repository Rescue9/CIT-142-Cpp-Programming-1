/*
 * Program: createPurchase.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 5, 2013
 */

/* Purpose: Create a structure named Purchase. Each purchase contains
 *  an invoice number, amount of sale, and amount of sales tax. the main()
 *  method declares a purchase object & prompts the user for it's details.
 *  invoice number must be between 1000 - 8000. Sales amount must be
 *  non-negative. Sales tax is 5% of purchase price. After object is created
 *  all info will be displayed.
 */

#include <iostream>
#include <iomanip>
using namespace std;

struct Purchase {
	int invoice;
	double amount;
	double tax;
};;

int main() {

	const bool DEBUG = false;
	const double sales_tax = 0.05;

	// create a new purchase object.
	Purchase purchase;

	// get invoice number
	cout << "Please enter an invoice number from 1000 to 8000: " << endl;
	cin >> purchase.invoice;

	if (DEBUG)
		cout << "DEBUG: Invoice number = " << purchase.invoice << endl;

	while (purchase.invoice < 1000 || purchase.invoice > 8000){
		cout << " Invalid Entry! Enter a number from 1000 to 8000: " << endl;
		cin >> purchase.invoice;
	}

	// get amount of sale
	cout << endl << "Please enter the amount of the sale: " << endl;
	cin >> purchase.amount;

	if (DEBUG)
		cout << "DEBUG: Amount = " << purchase.amount << endl;

	while (purchase.amount < 0){
		cout << " Invalid Entry! Enter an amount greater than $0.00" << endl;
		cin >> purchase.amount;
	}

	// calculate sales tax
	purchase.tax = purchase.amount * sales_tax;

	if (DEBUG)
		cout << "DEBUG: Tax = " << purchase.tax << endl;


	// output information
	cout << "Invoice #" << purchase.invoice << "| Amount: $" << purchase.amount << " Tax: $" << fixed << setprecision(2) << purchase.tax << " Total: $" << purchase.amount + purchase.tax << endl;


}
