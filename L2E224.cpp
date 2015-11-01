/*
 * L2E224.cpp
 *
 *  Created on: Oct 31, 2015
 *      Author: erikdaenitz
 */

#include "L2E224.h"
#include <iostream>
using namespace std;

L2E224::L2E224() {
	// TODO Auto-generated constructor stub

}

L2E224::~L2E224() {
	// TODO Auto-generated destructor stub
}

// Function declaration
int DemoConsoleOutput() {

	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

	return 0;
}

int main() {

	// Function call with return used to exit
	return DemoConsoleOutput();
}
