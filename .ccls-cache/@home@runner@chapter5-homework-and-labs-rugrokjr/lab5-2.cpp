//lab5-2.cpp - displays the total amount due
//Created/revised by <Kendra Ruggiero> on <7-22-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const double Discount_rate = 0.1;
	const double ship1 = 0.99;
	const double ship2 = 4.99;
	double amtdue = 0.0;
	char member = ' ';

	cout <<"Amount owed before discount and shipping: ";
	cin >> amtdue;
	cout <<"Premier club member (Y/N)? ";
	cin >> member;

	if (member == 'Y' || member == 'y')
		amtdue = amtdue - (amtdue * Discount_rate);


	if (amtdue  >= 100.0)
		amtdue = amtdue + ship1;
	else
		amtdue = amtdue + ship2;


cout << fixed << setprecision(2);
	cout << "Amount owed after discount and shipping: " 
		<< amtdue << endl;
	return 0;
}	//end of main function