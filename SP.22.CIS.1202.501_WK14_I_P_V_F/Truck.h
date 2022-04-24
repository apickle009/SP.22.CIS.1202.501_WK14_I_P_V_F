//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22

#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
	int towCap;

public:
	Truck() {

		towCap = 0;

	};

	int getTowingCapa();
	void setTowingCapa(int);
	void displayInfo();

};



#endif
