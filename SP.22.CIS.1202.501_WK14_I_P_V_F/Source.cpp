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
	string carMan;
	int year; 
	int doors;
	int towCapa;
	Vehicle urVehicle; 
	Car urCar;
	Truck urTruck; 

	cout << "Welcome Driver! " << endl;

	// Collecting and displaying Vehicle Details now

	cout << "\nVehicle" << "\n--------------------------------------------";
	cout << "\nPlease enter the make of your Vehicle: "; 
	getline(cin, vehicleMan);
	urVehicle.setManufacturer(vehicleMan);

	cout << "\nNow, Please enter the year your " << vehicleMan << " was built: ";
	cin.ignore();
	cin >> year;
	urVehicle.setYearBuilt(year);

	cout << endl <<  endl; 

	urVehicle.displayInfo(); 

	// Collecting and displaying Car Details now

	cout << "\nWelcome back Driver! This time we will need some additional details about your Car" << endl;

	cout << "\nPlease enter the make of your Vehicle: ";
	cin.ignore();
	getline(cin, carMan);
	urCar.setManufacturer(carMan);
	
	cout << "\nNow, Please enter the year your " << carMan << " was built: ";
	cin >> year;
	urCar.setYearBuilt(year);

	cout << "\nPlease provide the number of doors that your " << carMan << " has: ";
	cin >> doors;
	urCar.setDoors(doors);
	cout << endl << endl;

	urCar.displayInfo(); 







	system("pause");
	return 0; 
}