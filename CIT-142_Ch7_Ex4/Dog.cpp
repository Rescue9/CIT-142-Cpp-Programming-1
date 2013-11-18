/*
 * Program: Dog.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 16, 2013
 */

/* Purpose: Write the class definition for a Dog. Private data fields include name, breed, and age, and
a constant static field for the license fee, which is $12.25. Create public member functions
to set and display the data. Write a main() function that demonstrates the class operates
correctly. Save the file as Dog.cpp. */

#include <iostream>
#include <string>
using namespace std;

// declaration
class Dog {
private:
	string name;
	string breed;
	int age;
	static double LICENSE_FEE;

public:
	string getName();
	void setName(string);
	string getBreed();
	void setBreed(string);
	int getAge();
	void setAge(int);
	double getLicenseFee();
};

// implementation
double Dog::LICENSE_FEE = 12.25;

string Dog::getName(){
	return name;
}

void Dog::setName(string new_name){
	name = new_name;
}

string Dog::getBreed(){
	return breed;
}

void Dog::setBreed(string new_breed){
	breed = new_breed;
}

int Dog::getAge(){
	return age;
}

void Dog::setAge(int new_age){
	age = new_age;
}

double Dog::getLicenseFee(){
	return LICENSE_FEE;
}


// main
int main(){
	// first dog
	cout << "Creating a new dog 'first'" << endl;
	Dog first;
	cout << "Setting first dog name to FirstDog" << endl;
	first.setName("FirstDog");
	cout << "Setting first dog age to 1" << endl;
	first.setAge(1);
	cout << "Setting first dog breed to Lab" << endl;
	first.setBreed("Lab");

	// spacing
	cout << endl;

	// second dog
	cout << "Creating a new dog 'second'" << endl;
	Dog second;
	cout << "Setting second dog name to SecondDog" << endl;
	second.setName("SecondDog");
	cout << "Setting second dog age to 2" << endl;
	second.setAge(2);
	cout << "Setting second dog breed to Boxer" << endl;
	second.setBreed("Boxer");

	// spacing
	cout << endl;

	//printing information
	cout << " First dog information:" << endl;
	cout << "Age: " << first.getAge() << endl;
	cout << "Breed: " << first.getBreed() << endl;
	cout << "Name: " << first.getName() << endl;
	cout << "Fee: " << first.getLicenseFee() << endl;

	// spacing
	cout << endl;

	//printing information
	cout << " Second dog information:" << endl;
	cout << "Age: " << second.getAge() << endl;
	cout << "Breed: " << second.getBreed() << endl;
	cout << "Name: " << second.getName() << endl;
	cout << "Fee: " << second.getLicenseFee() << endl;

}

