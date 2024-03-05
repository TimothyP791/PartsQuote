#pragma once
#include <iostream>
#include <string>
using namespace std;
class Quote
{
private:
	double tax = .0975, salesPrice = 0.0;
public: 
	double calcPrice(double price);
	void displayQuote(double totalPrice, string name, string address, string phone);
};

