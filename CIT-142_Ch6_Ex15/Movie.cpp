/*
 * Program: Movie.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 1, 2013
 */


/* Purpose: Write a function that accepts two parameters: a string name of a movie and an integer
 running time in minutes. Provide a default value for the minutes so that if you call the
 function without an integer argument, the minutes default to 90. Write a main() function that proves
 you can call the function with a string argument alone as well as with a string and an integer.
 Save the file as Movie.cpp.*/

#include <iostream>
using namespace std;

void outputInformation(string name, int runtime){
	cout << "You entered " << name << " which has a runtime of " << runtime << "." << endl;
}


int main(){
	string movieName;
	int movieRuntime;

	cout << "Please type in the name of a movie." << endl;
	cin >> movieName;

	cout << "Do you know how long the movie is? (Y or N)" << endl;
	char knowTime;
	cin >> knowTime;
	switch (knowTime){
	case 'y':
	case 'Y':
		cout << "Please type in " << movieName << "'s runtime in minutes, or press enter if unknown." << endl;;
		cin >> movieRuntime;
		outputInformation(movieName, movieRuntime);
		return 1;
	default:
		void outputInformation(string, int = 90);
		outputInformation(movieName);
	}


}
