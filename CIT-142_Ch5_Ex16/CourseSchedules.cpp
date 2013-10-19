/*
 * Program: CourseSchedules.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Oct 19, 2013
 */

/* Purpose: Write an application that stores at least four different course names and meeting days
 *  and times in a two-dimensional string array. Allow the user to enter a course name (such
 *  as “CIS 110”) and display the day of the week and time that the course is held (such as
 *  “Th 3:30”). If the course does not exist, display an error message.
 */

#include <iostream>
using namespace std;

void displayCourseNames() {
	cout << "Available courses are CIS 242, CIT 136, BIO 174, and PSY 210." << endl;
}

int main() {

	// setup the two-dimensional array
	string courseSchedule [4] [2] = {
			{"CIS 242", "Th 13:30"},
			{"CIT 136", "Fr 12:45"},
			{"BIO 174", "Tu 16:15"},
			{"PSY 210", "Mo 09:00"}
	};;

	// prompt for user input
	cout << "Please enter a course name to view its scheduled time." << endl;

	// size must be 8 to factor for the ENTER key
	// it appears that anything typed in after the 7th character gets dumped
	const int INPUTSIZE = 8;
	char input[INPUTSIZE];
	cin.getline(input, INPUTSIZE);

	bool found = false;
	for (int i = 0; i < 4; i++) {
		if (input == courseSchedule[i][0]) {
			cout << courseSchedule[i][0] << " is at " << courseSchedule[i][1];
			found = true;
		}
	}

	if (!found) {
		cout << "That course is not in our matrix." << endl;
		displayCourseNames();
	}
}

