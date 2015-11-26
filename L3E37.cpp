/*
 * L3E37.cpp
 *
 *  Created on: Nov 25, 2015
 *      Author: erikdaenitz
 */

#include "L3E37.h"
#include <iostream>
using namespace std;


L3E37::L3E37() {
	// TODO Auto-generated constructor stub

}

L3E37::~L3E37() {
	// TODO Auto-generated destructor stub
}

enum cardinalDirections {
	North = 0,
	South,
	East,
	West,
};

int main() {
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	cardinalDirections windDirection = South;
	cout << "variable windDirection = " << windDirection << endl;

	return 0;
}
