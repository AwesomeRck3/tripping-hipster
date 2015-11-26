/*
 * L3E35.cpp
 *
 *  Created on: Nov 23, 2015
 *      Author: erikdaenitz
 */

#include "L3E35.h"
#include <iostream>
using namespace std;

L3E35::L3E35() {
	// TODO Auto-generated constructor stub

}

L3E35::~L3E35() {
	// TODO Auto-generated destructor stub
}

int main() {
	bool Flag = true;
	unsigned long Number = 25000000000;

	cout << "Flag = " << Flag;
	cout << " , sizeof(Flag) = " << sizeof(Flag) << endl;
	cout << "Number = " << Number;
	cout << " , sizeof(Number) = " << sizeof(Number) << endl;

	return 0;
}
