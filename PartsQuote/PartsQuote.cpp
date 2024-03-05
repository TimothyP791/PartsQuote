// PartsQuote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "CarParts.h"
#include "Quote.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int choice;
	double total = 0.0;
	string Name, Address, Phone;
	CarParts part;
	Quote custQuote;

	cout << "This program takes in a customer Name, Address, and Phone # and provides them " << endl;
	cout << "with a quote based on parts puchased" << endl;
	cout << "Enter customer Name:";
	getline(cin,Name);
	cout << "\nEnter customer Address:";
	getline(cin,Address);
	cout << "\nEnter customer Phone#:";
	getline(cin,Phone);
	
	do {
		cout << "Enter the part number for the part the customer wishes to order" << endl;
		cout << "1. Engine" << endl;
		cout << "2. Brakes" << endl;
		cout << "3. Muffler" << endl;
		cout << "4. Battery" << endl;
		cout << "5. Axle" << endl;
		cout << "6 to finish quote" << endl;
		cin >> choice;

		if (choice == 1) {
			part.setPrice(part.retrievePart(1));
			total = custQuote.calcPrice(part.getPrice());
		}
		else if (choice == 2) {
			part.setPrice(part.retrievePart(2));
			total = custQuote.calcPrice(part.getPrice());
		}
		else if (choice == 3) {
			part.setPrice(part.retrievePart(3));
			total = custQuote.calcPrice(part.getPrice());
		}
		else if (choice == 4) {
			part.setPrice(part.retrievePart(4));
			total = custQuote.calcPrice(part.getPrice());
		}
		else if (choice == 5) {
			part.setPrice(part.retrievePart(5));
			total = custQuote.calcPrice(part.getPrice());
		}
		else if (choice == 6) {
			cout << "Quote complete" << endl;
		}
		else cout << "The only valid options are 1-6" << endl;
	} while (choice != 6);
		
	custQuote.displayQuote(total, Name, Address, Phone);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
