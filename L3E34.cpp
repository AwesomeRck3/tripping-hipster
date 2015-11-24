/*
 * L3E34.cpp
 *
 *  Created on: Nov 23, 2015
 *      Author: erikdaenitz
 */

#include "L3E34.h"
#include <iostream>


L3E34::L3E34() {
	// TODO Auto-generated constructor stub

}

L3E34::~L3E34() {
	// TODO Auto-generated destructor stub
}

int main() {
	using namespace std;
	cout << "Computing the size of some C++ inbuilt variable types" << endl;

	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
	cout << "Size of short int: " << sizeof(short) << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
	cout << "Size of long int: " << sizeof(long) << endl;
	cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;
	cout << "Size of long long: " << sizeof(long long) << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	cout << "The output changes with compiler, hardware and OS" << endl;

	return 0;
}
