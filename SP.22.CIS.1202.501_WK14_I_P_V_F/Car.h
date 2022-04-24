//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22

#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
	int numDoors;

public:
	Car() {

		numDoors = 0;

	};

	int getDoors();
	void setDoors(int);
	void displayInfo();

};



#endif#pragma once
