/*
 * L3E32.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: erikdaenitz
 */

#include "L3E32.h"
#include <iostream>
using namespace std;

L3E32::L3E32() {
	// TODO Auto-generated constructor stub

}

L3E32::~L3E32() {
	// TODO Auto-generated destructor stub
}

void multiplyNumbers () {
	cout << "Enter the first number: ";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number : ";
	int secondNumber = 0;
	cin >> secondNumber;

	// Multiply two numbers, store the result in a variable
	int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplicationResult << endl;

}

int main () {
	cout << "This program will help you multiply two numbers" << endl;

	// Call the function that does all the work
	multiplyNumbers();

	// cout << firstNumber << " x " << secondNumber;
	// cout << " = " << multiplicationResult << endl;

	return 0;
}
