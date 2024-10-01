
#include <iostream>
#include <string>
#include "Header.h"
 
using namespace std;


int  upperbound = 0;
int lowerbound = 0;
string prompting = "message";
string errorm = "errorm";

int looping(int, int, string, string);

int main()
{

	Header object;

	string _upperbound;
	string _lowerbound;
	string _prompting;
	string _errorm;



	cout << "\nWelcome to Oops! shall we try again?" << endl;

	cout << "\nEnter 'me' to create your lower bound or 'd' to get a defalt: ";
	cin >> _lowerbound;
	lowerbound = object.lowm(_lowerbound);



	cout << "\nEnter 'me' to create your upper bound or 'd' to get a defalt: ";
	cin >> _upperbound;
    upperbound = object.upm(_upperbound);

	cout << "\nEnter 'me' to create your prompt  message or 'd' to get a defalt: ";
	cin >> _prompting;
	prompting = object.promtm(_prompting);

	cout << "\nEnter 'me' to create your error message or 'd' to get a defalt: ";
	cin >> _errorm;
	errorm = object.errorm(_errorm);

	int valuef = looping(lowerbound, upperbound, prompting, errorm);

	cout << "\nThis is your valid number: " << valuef << endl;

	return 0;
}

int looping(int lowerbound_, int upperbound_, string prompting_, string errorm_)
{
	int valuein = 0;
	bool check = false;
	cout << "\nUpper bound: " << upperbound_ << " and lower bound: " << lowerbound_ << endl;;
	
	while (!check)
	{
		cout << "\n" <<  prompting_ << endl;
		cin >> valuein;

		if (valuein >= lowerbound_ && valuein <= upperbound_)
		{
			check = true;
		}
		else
		{
			cout << "\n" << errorm_ << endl;
			check = false;
		}

	}

	return valuein;

}