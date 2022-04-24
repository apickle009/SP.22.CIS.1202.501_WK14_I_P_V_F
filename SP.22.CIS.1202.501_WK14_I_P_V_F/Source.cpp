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
	string truckMan;
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

	cout << "Please enter the year your " << vehicleMan << " was built: ";
	cin >> year;
	urVehicle.setYearBuilt(year);

	cout << endl <<  endl; 

	urVehicle.displayInfo(); 
	cin.ignore(); 

	// Collecting and displaying Car Details now

	cout << "\nCar:" << "\n--------------------------------------------";
	cout << "\nPlease enter the make of your Car: ";
	getline(cin, carMan);
	urCar.setManufacturer(carMan);
	
	cout << "Please enter the year your " << carMan << " was built: ";
	cin >> year;
	urCar.setYearBuilt(year);

	cout << "Please provide the number of doors that your " << carMan << " has: ";
	cin >> doors;
	urCar.setDoors(doors);
	cout << "--------------------------------------------";

	urCar.displayInfo(); 
	cin.ignore();

	// Collecting and displaying Truck Details now

	cout << "\nTruck:" << "\n--------------------------------------------";
	cout << "\nPlease enter the make of your Truck: ";
	getline(cin, truckMan);
	urTruck.setManufacturer(truckMan);

	cout << "Now, Please enter the year your " << truckMan << " was built: ";
	cin >> year;
	urTruck.setYearBuilt(year);

	cout << "Please provide the towing capacity that your " << truckMan << " has: ";
	cin >> towCapa;
	urTruck.setTowingCapa(towCapa);
	cout << "\n--------------------------------------------";

	urTruck.displayInfo();
	
	system("pause");
	return 0; 
}