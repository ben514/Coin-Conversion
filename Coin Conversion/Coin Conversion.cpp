// Coin Conversion.cpp : Defines the entry point for the console application.
// Write a program that prompts the user to enter some number of pennies nickels dimes quarters half dollars and one dollar 
// coins query the user separately for the number of each size coin.

#include "stdafx.h"
#include "std_lib_facilities.h"

int main()
{
	double pennie_amt;
	double pennie_val;
	double nickel_amt;
	double nickel_val;
	double dime_amt;
	double dime_val;
	double quarter_amt;
	double quarter_val;
	double dollar_amt;
	double dollar_val;
	double five_dollar_amt;
	double five_dollar_value;
	double ten_dollar_amt;
	double ten_dollar_value;
	double twenty_dollar_amt;
	double twenty_dollar_val;
	double fifty_dollar_amt;
	double fifty_dollar_val;
	double hundred_dollar_amt;
	double hundred_dollar_val;
	
	cout << "Hello,\n" << "This program shows your money value in different U.S. currencies.\n" << "\n" << "Would you like to enter Lazy Mode(1) or Standard Mode(2)?\n" << "Lazy Mode: type in number of various bills and coins you have.\n" << "Standard Mode: for coins, type in the value in cents and for bills in dollars.\n";
	bool mode_select;
	cin >> mode_select;
	if (mode_select == '1')
		cout << "You have selected Lazy Mode.\n" << "Now, you will type in number of coins and bills you have.\n" << "\n How many pennies do you have?\n";
		cin >> pennie_amt;
		pennie_val = pennie_amt / 100;
		cout << "How many nickels do you have?\n";
		cin >> nickel_amt;
		nickel_val = nickel_amt / 20;
		cout << "How many dimes do you have?\n";
		cin >> dime_amt;
		dime_val = dime_amt / 10;
		cout << "How many quarters do you have?\n";
		cin >> quarter_amt;
		quarter_val = quarter_amt / 4;
		cout << "How many dollar bills do you have?\n";
		cin >> dollar_amt;
		dollar_val = dollar_amt;
		cout << "How many five-dollar bills do you have?\n";
		cin >> five_dollar_amt;
		five_dollar_value = five_dollar_amt * 5;
		cout << "How many ten-dollar bills do you have?\n";
		cin >> ten_dollar_amt;
		ten_dollar_value = ten_dollar_amt * 10;
		cout << "How many twenty-dollar bills do you have?\n";
		cin >> twenty_dollar_amt;
		twenty_dollar_val = twenty_dollar_amt * 20;
		cout << "How many fifty-dollar bills do you have?\n";
		cin >> fifty_dollar_amt;
		fifty_dollar_val = fifty_dollar_amt * 50;
		cout << "How many hundred-dollar bills do you have?\n";
		cin >> hundred_dollar_amt;
		hundred_dollar_val = hundred_dollar_amt * 100;
		cout << "Your Money Value Datasheet:\n" << "\n In Pennies: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val) * 100 << " coins\n"
			<< "In Nickels: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val) * 20 << " coins\n"
			<< "In Dimes: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val) * 10 << " coins\n"
			<< "In Quarters: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val) * 4 << " coins\n"
			<< "In Dollars: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val) << " dollars\n"
			if (five_dollar_value/5>1)
				cout << "In Five-dollar bills: " << (pennie_val + nickel_val + dime_val + quarter_val + dollar_val + five_dollar_value + ten_dollar_value + twenty_dollar_val + fifty_dollar_val + hundred_dollar_val)/5
		
	if (mode_select=='2')
		cout << "Your have selected Standard Mode.\n" << "Now, you will type in values in cents for coins and dollars in bills.\n"
}

