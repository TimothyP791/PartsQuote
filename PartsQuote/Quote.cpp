#include "Quote.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double Quote::calcPrice(double price)
{
    double temp;
    temp = tax * price;
    salesPrice += price + temp;

    return salesPrice;
}

void Quote::displayQuote(double totalPrice, string name, string address, string phone)
{
    cout << "Customer Name:" << name << endl;
    cout << "Customer Address:" << address << endl;
    cout << "Customer Phone:" << phone << endl;
    cout << fixed << setprecision(2);
    cout << "The total Price for all parts ordered is: $" << totalPrice << endl;
}
