#include "CarParts.h"

string CarParts::retrievePart(int p) { // Returns value of chosen part to be declared in main
	return parts[p - 1];
}

void CarParts::setPrice(string part) {
	if (part == "Engine") {
		partPrice = 2500.34;
	}
	else if (part == "Brakes") {
		partPrice = 350.75;
	}
	else if (part == "Muffler") {
		partPrice = 225.26;
	}
	else if (part == "Battery") {
		partPrice = 200.89;
	}
	else if (part == "Axle") {
		partPrice = 120.16;
	}
	else
		partPrice = 0.0;
}

double CarParts::getPrice()
{
	return partPrice;
}
