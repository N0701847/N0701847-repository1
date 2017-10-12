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
 inputValue(string city, int distance, int hour, double minute );
int main()
{
	tourType destination;
	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime.hr = 3;
	destination.travelTime.min = 15;

	displayValue(destination.cityName, destination.distance, destination.travelTime.hr, destination.travelTime.min);

    return 0;
}

void displayValue(string name, int distance, int timeHour, double timeMin) {
	cout << "Destination: " << name << "\nDistance to destination: " << distance << " miles\nHow long till arrival at destination: " << timeHour << " hours and " << timeMin << " minutes" << endl;
}

string inputValue(tourType storageVariable) {
	
	
	
	return 0;
}