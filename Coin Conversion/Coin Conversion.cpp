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
	
	cout << "Hello,\n" << "This program shows your money value in different U.S. currencies.\n" << "\n" << "Would you like to enter Lazy Mode(1) or Standard Mode(2)?\n" << "Lazym Mode: type in number of various bills and coins you have.\n" << "Standard Mode: for coins, type in the value in cents and for bills in dollars.\n";
	bool mode_select;
	cin >> mode_select;
	if (mode_select == '1')
		cout << "You have selected Lazy Mode.\n" << "Now, you will type in number of coins and bills you have.\n" << "\n How many pennies do you have?\n"
		cin >> pennie_amt
		pennie_val = pennie_amt / 100
		
	if (mode_select=='2')
		cout << "Your have selected Standard Mode.\n" << "Now, you will type in values in cents for coins and dollars in bills.\n"
}

