/*
 * Program: Hotel.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Sep 22, 2013
 */

/* Purpose: To display a pricing list for a hotel based
 * upon hotel room type & floor as picked by the user.
 */


#include <iostream>
using namespace std;

int main() {
	// get users requested floor and suite type
	cout << "Welcome to the Carlington Hotel." << endl;
	cout << endl;
	cout << endl;
	cout << "Please indicate which type of room you would like to reserve: " << endl;
	int roomType = 0;
	while (roomType == 0 || roomType > 3){
		cout << "press 1 for single, 2 for double, and 3 for a suite." << endl;
		cin >> roomType;
	}
	cout << endl;
	cout << endl;
	cout << "Please indicate which floor you would like to stay on (1 - 12): " << endl;
	int floorNumber = 0;
	cin >> floorNumber;

	while (floorNumber == 0 || floorNumber > 12) {
		cout << "We don't have any floors below 0 above 12. Please try again." << endl;
		cin >> floorNumber;
	}

	double roomCost;
	string roomDescriptor;

	switch (roomType){
	case 1:
		roomDescriptor = "Single";
		break;

	case 2:
		roomDescriptor = "Double";
		break;

	case 3:
		roomDescriptor = "Suite";
		break;
	}

	if (floorNumber > 0 && floorNumber <= 5){
		switch (roomType){
		case 1: // single
			roomCost = 45.00;
			break;

		case 2: // double
			roomCost = 60.00;
			break;

		case 3: // suite
			roomCost = 130.00;
			break;
		}
	} else if (floorNumber > 5 && floorNumber < 12) {
		switch (roomType){
		case 1: // single
			roomCost = 55.00;
			break;

		case 2: // double
			roomCost = 72.00;
			break;

		case 3: // suite
			roomCost = 215.00;
			break;
		}
	} else {
		switch (roomType){
		case 1: // single
			cout << "We do not offer single rooms on the 12th floor." << endl;
			cout << "Maybe the up-1scale taste of the Carlington isn't your style. Motel 6 is right across the street." << endl;
			return 0;

		case 2: // double
			roomCost = 120.00;
			break;

		case 3: // suite
			roomCost = 350.00;
			break;;
		}
	}

	cout << "You have selected a " << roomDescriptor << " on floor " << floorNumber << "." << endl;
	cout << "That room will run " << roomCost << " per night." << endl;
	cout << "Thank you for considering the Carlington Hotel." << endl;

	return 1;
}



