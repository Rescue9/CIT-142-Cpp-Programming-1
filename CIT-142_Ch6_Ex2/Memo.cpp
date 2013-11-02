/*
 * Program: Memo.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 1, 2013
 */


/* Purpose: Write a program in which the main() function uses several cout statements to display
 a memo to your boss. Use the company name “C++ Software Developers” at least three
 times in the memo. Each time you want to display the company name, instead of using a
 cout statement, call a function named companyName() that displays the name. Save the
 file as Memo.cpp. */

#include <iostream>
using namespace std;

int main(){
	void companyName();
	companyName();
	cout << endl <<"123 Advantage Way" << endl;
	cout << "Misery, Ky  12345" << endl;

	cout << endl << endl;

	cout << "Hey boss," << endl;
	cout << "Jerry over in the logistics division of ";
	companyName();
	cout << " said that you weren't holding up your end of the bargain on the birthday fund." << endl;
	cout << "While we all like to participate in the celebration, eating on everyone elses dime really isn't cool. " << endl <<
			"After talking to all additional employees in our division, we think you should really start pitching in some " << endl <<
			"funds on the celebration or resort to bringing your own food next time we have any sort of employee celebration. " << endl <<
			"Thank you for your consideration." << endl;

	cout << endl << endl;
	cout << "Open Mouth Insertfoot" << endl;
	cout << "Soon to be former Senior Product Developer" << endl;
	companyName();

}

