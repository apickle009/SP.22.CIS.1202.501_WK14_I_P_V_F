//Tony Pickle
//SP.22.CIS.1202.501
//4.24.2022

#include <iostream>
#include <string>
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"

using namespace std; 

int main() {

	string vehicleMan;
	int year; 
	int doors;
	int towCapa;
	Vehicle urVehicle; 
	Car urCar;
	Truck urTruck; 

	cout << "Welcome Driver! " << endl; 

	cout << "\nPlease enter the make of your Vehicle: "; 
	getline(cin, vehicleMan);
	urVehicle.setManufacturer(vehicleMan); 

	cout << "\nNow, Please enter the year your " << vehicleMan << " was built: ";
	cin.ignore();
	cin >> year;
	cout << endl <<  endl; 
	urVehicle.setYearBuilt(year);

	urVehicle.displayInfo(); 







	system("pause");
	return 0; 
}