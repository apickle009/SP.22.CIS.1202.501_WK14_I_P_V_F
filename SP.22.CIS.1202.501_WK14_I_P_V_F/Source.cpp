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
	cin >> year;
	urVehicle.setYearBuilt(year);

	cout << endl <<  endl; 

	urVehicle.displayInfo(); 
	cin.ignore(); 

	// Collecting and displaying Car Details now

	cout << "\nCar" << "\n--------------------------------------------";
	cout << "\nPlease enter the make of your Car: ";
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
	cin.ignore();







	system("pause");
	return 0; 
}