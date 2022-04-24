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

	// Collecting and displaying Vehicle Details now

	cout << "\nPlease enter the make of your Vehicle: "; 
	getline(cin, vehicleMan);
	
	cout << "\nNow, Please enter the year your " << vehicleMan << " was built: ";
	cin.ignore();
	cin >> year;
	cout << endl <<  endl; 

	urVehicle.setManufacturer(vehicleMan);
	urVehicle.setYearBuilt(year);

	urVehicle.displayInfo(); 

	// Collecting and displaying Car Details now

	cout << "\nWelcome back Driver! This time we will need some additional details" << endl;

	cout << "\nPlease enter the make of your Vehicle: ";
	getline(cin, vehicleMan);
	
	cout << "\nNow, Please enter the year your " << vehicleMan << " was built: ";
	cin.ignore();
	cin >> year;

	cout << "\nPlease provide the number of doors that your " << vehicleMan << " has: ";
	cin >> doors;
	cout << endl << endl;

	urCar.setManufacturer(vehicleMan);
	urCar.setYearBuilt(year);
	urCar.setDoors(doors);

	urCar.displayInfo(); 







	system("pause");
	return 0; 
}