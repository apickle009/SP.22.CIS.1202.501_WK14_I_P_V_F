//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22


#include <string>
#include "Truck.h"
#include <iostream>


using namespace std;

int Truck::getTowingCapa() {

	return  Truck::towCap;
}

void Truck::setTowingCapa(int tC) {

	Truck::towCap = tC;

}

void Truck::displayInfo() {

	Vehicle::displayInfo();
	cout << "Tow Capacity: " << towCap << endl << endl;

}