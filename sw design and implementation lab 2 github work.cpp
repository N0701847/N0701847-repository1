// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void displayValue(string name, int distance, int timeHour, double timeMin);



struct timeType
{
	int hr;
	double min;
	int sec;
};

struct tourType
{
	string cityName;
	int distance;
	timeType travelTime;
};
 tourType inputValue(string name, int distance, int hour, double min);
int main()
{
	tourType destination;
	destination = inputValue(destination.cityName, destination.distance, destination.travelTime.hr, destination.travelTime.min);
	

	displayValue(destination.cityName, destination.distance, destination.travelTime.hr, destination.travelTime.min);

    return 0;
}

void displayValue(string name, int distance, int timeHour, double timeMin) {
	cout << "Destination: " << name << "\nDistance to destination: " << distance << " miles\nHow long till arrival at destination: " << timeHour << " hours and " << timeMin << " minutes" << endl;
}

tourType inputValue(string name, int distance, int hour, double min) {
	tourType newDestination;
	newDestination.cityName = "Nottingham";
	newDestination.distance = 130;
	newDestination.travelTime.hr = 3;
	newDestination.travelTime.min = 15;
	
	
	return newDestination;
}