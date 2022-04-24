//Tony Pickle
//SP.22.CIS.1202.501 
//4.23.22

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>

using namespace std; 

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle() {

		manufacturer = " ";
		yearBuilt = 0; 
	}
	

	string getManufacturer(); 
	int getYearBuilt();
	void setManufacturer(string);
	void setYearBuilt(int); 
	void displayInfo();

};



#endif