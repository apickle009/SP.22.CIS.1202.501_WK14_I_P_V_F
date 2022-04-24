//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22

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