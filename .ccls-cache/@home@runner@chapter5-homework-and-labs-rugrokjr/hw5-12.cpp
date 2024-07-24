//hw5-12.cpp - displays the total owed
//Created/revised by <Kendra Ruggiero> on <7-22-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const double discount_perc = 0.5;
double price1 = 0.00;
double price2 = 0.00;
double total = 0.00;
double discount = 0.0;

cout << "Enter Price of first item: ";"
		cin >> price1;
cout << "Enter Price of second item: ";"
		cin >> price2;

if (price1 <= price2)
		discount = price1 * discount_perc;
	price1 = price1 - discount;
else 
		discount= price2 * discount_perc;
	price2 = price2 - discount;
//end if
	
total = price1 + price2;

cout << fixed << setprecision(2);
cout << "Total due" << total 
<< endl;

	return 0;
}	//end of main function