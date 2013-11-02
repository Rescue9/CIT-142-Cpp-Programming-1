/*
 * Program: SmallestAndLargest.cpp
 * Programmer: Andrew Buskov
 * Class: CIT 142
 * Date: Nov 1, 2013
 */


#include <iostream>
using namespace std;

double findSmallest(double initialArray[], int size){
	double smallest;
	smallest = initialArray[1];
	for (int i = 0; i < size; i++){
		if (initialArray[i] < smallest){
			smallest = initialArray[i];
		}
	}

	return smallest;
}

double findLargest(double initialArray[], int size){
	double largest;
	largest = initialArray[1];
	for (int i = 0; i < size; i++){
		if (initialArray[i] > largest){
			largest = initialArray[i];
		}
	}

	return largest;
}


