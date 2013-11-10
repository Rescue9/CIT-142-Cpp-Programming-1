/*
 * Program: Heros.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 10, 2013
 */


/* Purpose: This assignment is worth 30 points. You can put those 30 points to any single assignment. If you have any extra credit points left over after that they cannot be used on anything else. The grading on the assignment will be pretty critical.

 Here are the requirements:
 Create a Hero structure that has a name, health, and attack property. (5 points)
 Create an array of Heroes that is the exact size the user input. (5 points)
 Create a function that prompts the user for the Hero's stats and returns a Hero. This function will be called createHero. (5 points)
 Create a function that accepts an array of Heroes and sorts them by either health or attack. This function will be called sortHeroes. (10 points)
 Create another function that accepts a Hero and displays its information. This function will be called displayHero. (5 points)

 Work flow:
 Prompt the user for how many heroes they want to create.
 Prompt the user for each hero's information.
 Prompt the user for how they want the heroes sorted.
 Display the heroes back to the user in a sorted order.

 Due November 24th at Midnight. */

#include <iostream>
#include <algorithm>
using namespace std;

struct Hero {
	string name;
	double health;
	double attackProperty;
};

int heroAmount(){
	cout << "How many heroes would you like to build for?" << endl;
	int numHeroes = 0;
	cin >> numHeroes;
	return numHeroes;
}

void createHero(Hero hero[],int numberOfHeroes){
	int counter = 0;
	do {
	cout << "Please enter a name for hero number " << counter + 1 << ":" << endl;
	cin >> hero[counter].name;
	cout << "Please enter " << hero[counter].name << "'s health:" << endl;
	cin >> hero[counter].health;
	cout << "Please enter " << hero[counter].name << "'s attack value:" << endl;
	cin >> hero[counter].attackProperty;
	cout << endl << endl;
	counter++;
	} while (counter < numberOfHeroes);;
}

bool sortHealth(Hero const& first, Hero const& second){
	return first.health < second.health;
}

bool sortAttack(Hero const& first, Hero const& second){
	return first.attackProperty < second.attackProperty;
}

void sortHeroes(Hero hero[], int numberOfHeroes){
	int sortOrder = 0;
	do {
		cout << "Please enter one of the following numbers to indicate how you would like to sort the list of heroes entered?" << endl;
		cout << "1. Health" << endl;
		cout << "2. Attack" << endl;
		cout << endl << endl;

		cin >> sortOrder;
		switch (sortOrder){
		case 1: sortOrder = 1; break;
		case 2: sortOrder = 2; break;
		default: cout << "You didn't enter a valid selection";
			sortOrder = 0;
		}
	} while (sortOrder == 0);



	// create switch to sort by health or attack
	switch(sortOrder){
	case 1: // sort by health
		std::sort(hero, hero + numberOfHeroes, sortHealth);
		break;
	case 2: // sort by attack
		std::sort(hero, hero + numberOfHeroes, sortAttack);
		break;
	}
}

void displayHero(Hero hero[], int heroNum){
	cout << "Hero Name: " << hero[heroNum].name << "." << endl;
	cout << "Hero Health: " << hero[heroNum].health << "." << endl;
	cout << "Hero Attack: " << hero[heroNum].attackProperty << "." << endl;
	cout << endl << endl;
}

int main(){

	// get number of heroes from user
	int numberOfHeroes = heroAmount();
	const int TOTAL_HEROES = numberOfHeroes;
	Hero hero[TOTAL_HEROES];;


	// get hero information
	createHero(hero, numberOfHeroes);

	// sort heroes
	sortHeroes(hero,numberOfHeroes);

	for (int i = 0; i < numberOfHeroes; i++) {
		displayHero(hero, i);
	}
}


