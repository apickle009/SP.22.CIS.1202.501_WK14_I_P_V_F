//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22


#include <string>
#include "Car.h"
#include <iostream>


using namespace std;

int Car::getDoors() {

	return Car::numDoors; 
}

void Car::setDoors(int doors) {

	Car::numDoors = doors; 

}

void Car::displayInfo() {

	Vehicle::displayInfo();
	cout << "Doors: " << numDoors << endl;

}
