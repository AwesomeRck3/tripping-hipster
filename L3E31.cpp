/*
 * L3E31.cpp
 *
 *  Created on: Nov 11, 2015
 *      Author: erikdaenitz
 */

#include "L3E31.h"
#include <iostream>
using namespace std;

L3E31::L3E31() {
	// TODO Auto-generated constructor stub

}

L3E31::~L3E31() {
	// TODO Auto-generated destructor stub
}

int main() {

	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number acqui: ";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	int secondNumber = 0;
	cin >> secondNumber;

	// Multiply the two numbers, store result in a variable
	int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplicationResult << endl;

	return 0;
}
