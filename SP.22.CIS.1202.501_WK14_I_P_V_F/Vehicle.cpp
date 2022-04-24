//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22


#include <string>
#include "Vehicle.h"
#include <iostream>


using namespace std;

void Vehicle::setManufacturer(string manufact) {

	Vehicle::manufacturer = manufact; 
}

void Vehicle::setYearBuilt(int daYearBuilt) {

	Vehicle::yearBuilt = daYearBuilt; 
}

int Vehicle::getYearBuilt() {

	return Vehicle::yearBuilt;
}

string Vehicle::getManufacturer() {

	return Vehicle::manufacturer;
}


void Vehicle::displayInfo() {

	cout << "\nVehicle Information: ";
	cout << "\nMake: " << manufacturer; 
	cout << "\nYear Assembled: " << yearBuilt; 
	
}

