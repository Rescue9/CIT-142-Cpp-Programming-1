/*
 * Program: Coffee.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 18, 2013
 */


/* Purpose:
 a. Define a class named CoffeeOrder. Declare a private static field that holds the price
 of a cup of coffee as $1.25. Include private integer fields that you set to a flag value of 1
 or 0 to indicate whether the order should have any of the following: cream, milk, sugar,
 or artificial sweetener. Include a public function that takes a user’s order from the key-
 board and sets the values of the four fields in response to four prompts. If the user
 indicates both milk and cream, turn off the milk flag to allow only cream. If the user
 indicates both sugar and artificial sweetener, turn off the artificial sweetener flag,
 allowing only sugar. Include another function that displays the user’s completed order.
 Write a main() function that declares a CoffeeOrder object and calls the data entry
 and display methods. Save the file as Coffee.cpp.

 b. Using the CoffeeOrder class, write a main()function that continues to ask a user for an
 order in a loop until the user indicates the order is complete or 10 orders have been placed,
 whichever comes first. After the user indicates that ordering is complete, display a recap
 of all the coffee orders, including the cream, milk, sugar, and sweetener status of each,
 as well as a count of the number of coffees ordered and the total price. Save the file as
 Coffee2.cpp.
 */

#include <iostream>
using namespace std;

class CoffeeOrder{
private:
	const static double PRICE;
	int entry;
	int cream;
	int milk;
	int sugar;
	int artificial;
	void setCream(int);
	void setMilk(int);
	void setSugar(int);
	void setArtificial(int);


public:
	void takeOrder();
	void verifyOrder();
	void displayOrder();
	void displayTotal(int);
};

const double CoffeeOrder::PRICE = 1.25;

void CoffeeOrder::setCream(int _cream){
	cream = _cream;
}
void CoffeeOrder::setMilk(int _milk){
	milk = _milk;
}
void CoffeeOrder::setSugar(int _sugar){
	sugar = _sugar;
}
void CoffeeOrder::setArtificial(int _artificial){
	artificial = _artificial;
}

void CoffeeOrder::takeOrder(){
	cout << "Enter 1 for yes, 0 for no." << endl;
	cout << "Would you like Cream?" << endl;
	cin >> entry;
	setCream(entry);
	cout << "Would you like Milk?" << endl;
	cin >> entry;
	setMilk(entry);
	cout << "Would you like Sugar?" << endl;
	cin >> entry;
	setSugar(entry);
	cout << "Would you like Artificial Sweetener?" << endl;
	cin >> entry;
	setArtificial(entry);
}

void CoffeeOrder::verifyOrder(){
	if(cream == 1 && milk == 1){
		milk = 0;
		cout << "Can't have cream and milk... choosing cream." << endl;
	}

	if(sugar == 1 && artificial == 1){
		artificial = 0;
		cout << " Can't have sugar and artificial sweetener... choosing sugar." << endl;
	}
}

void CoffeeOrder::displayOrder(){
	int black_coffee_count = 0;
	cout << "You ordered one cup of coffee. It contains: ";
	if(cream == 1) {cout << " cream "; black_coffee_count++;};
	if(milk == 1) {cout << " milk "; black_coffee_count++;};
	if(sugar == 1) {cout << " sugar "; black_coffee_count++;};
	if(artificial == 1) {cout << " artificial sweetener "; black_coffee_count++;};
	if(black_coffee_count == 0) {cout << " nothing. ";};
	cout << endl << endl;
}

void CoffeeOrder::displayTotal(int number_of_cups){
	double total;
	total = number_of_cups * PRICE;
	cout << "The total for this order is: $" << total << endl;
}

int main(){
	int order_number = 1;
	bool finished = false;
	string entry;
	CoffeeOrder coffee_order[10];

	do {
	cout << "Please order your cup of coffee #" << order_number << endl;
	coffee_order[order_number].takeOrder();
	coffee_order[order_number].verifyOrder();
	order_number++;
	//coffee_order[order_number].displayOrder();
	cout << "Would you like another cup? (Y or N)" << endl;
	cin >> entry;
	if (entry == "N") { finished = true;};
	} while (!finished && order_number < 11);

	if (order_number == 10){
		cout << "You've reached your max order. Please order again." << endl << endl;
	}

	// display whole order
	for (int i = 1; i < order_number; i++){
		coffee_order[i].displayOrder();
	}

	coffee_order[order_number].displayTotal(order_number-1);
	return 0;
}
