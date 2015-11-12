/*
 * L2E226.cpp
 *
 *  Created on: Nov 10, 2015
 *      Author: erikdaenitz
 */

#include "L2E226.h"
#include <iostream>
#include <string>
using namespace std;

L2E226::L2E226() {
	// TODO Auto-generated constructor stub

}

L2E226::~L2E226() {
	// TODO Auto-generated destructor stub
}

int main () {
	// Declare a variable to store an integer
	int InputNumber;

	cout << "Enter an integer: ";

	// Store integer given user input
	cin >> InputNumber;

	// The same with text i.e. string data
	cout << "Enter your name: ";
	string InputName;
	cin >> InputName;

	cout << InputName << " entered " << InputNumber << endl;

	return 0;
}
