#pragma once
#include <iostream>
#include <string> 
using namespace std;
class CarParts
{
private:
	string parts[5] = { "Engine", "Brakes", "Muffler", "Battery", "Axle"};
	double partPrice = 0.0;
public:
	string retrievePart(int p);
	void setPrice(string part);
	double getPrice();

};

