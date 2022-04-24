#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>;
#include <iostream>;

using namespace std; 

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(string manufacturer, int yearBuilt) {

		manufacturer = " ";
		yearBuilt = 0; 

	}
	;

	void getManufacturer(); 
	void getYearBuilt();
	void setManufacturer(string);
	void setUYearBuilt(int); 
	void displayInfo();

};



#endif