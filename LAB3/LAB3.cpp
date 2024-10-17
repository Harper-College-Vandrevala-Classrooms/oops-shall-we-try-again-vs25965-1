
#include <iostream>
#include <string>
#include "Header.h"
#include "validator.h"
 
using namespace std;


int upperbound = 0;
int lowerbound = 0;
string prompting = "message";
string errorm = "errorm";

int main()
{

	Header object;
	validator _validate;

	string _upperbound;
	string _lowerbound;
	string _prompting;
	string _errorm;
	string exit_check;
	string option;


	cout << "\nWelcome to Oops! shall we try again? Lab" << endl;

	cout << "Enter 's' to enter a string or 'n' to enter a number: ";
	cin >> option;
	if (option == "s")
	{
		string _callerstring;
		cout << "Enter your string: ";
		cin >> _callerstring;
		cout << "This is your string: " << _validate.looping(_callerstring);
	}
	else
	{
		cout << "\nEnter 'me' to create your lower bound or 'd' to get a defalt of (1): ";
		cin >> _lowerbound;
		lowerbound = object.lowm(_lowerbound);

		cout << "\nEnter 'me' to create your upper bound or 'd' to get a defalt of (100): ";
		cin >> _upperbound;
		upperbound = object.upm(_upperbound);

		cout << "\nEnter 'me' to create your prompt  message or 'd' to get a defalt: ";
		cin >> _prompting;
		prompting = object.promtm(_prompting);

		cout << "\nEnter 'me' to create your error message or 'd' to get a defalt: ";
		cin >> _errorm;
		errorm = object.errorm(_errorm);

		int valuef = _validate.looping(lowerbound, upperbound, prompting, errorm);

		if (valuef == -0)
		{
			cout << "You exited the program";
		}
		else
		{
			cout << "\nThis is your valid number: " << valuef << endl;
		}
	}
		

	return 0;
}

