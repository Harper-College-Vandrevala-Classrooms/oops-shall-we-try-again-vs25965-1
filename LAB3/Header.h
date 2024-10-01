#pragma once
#include <iostream>

using namespace std;

class Header
{
public : 

	string promtm(string _prompting)
	{
		string promtm;

		if (_prompting == "me")
		{
			cout << "\nEnter your promt message: ";
			cin >> promtm;
			return promtm;
		}
		else
		{
			return "\nEnter a number within the bounds: ";
		}

	}

	string errorm(string _errorm)
	{
		string errorm;

		if (_errorm == "me")
		{
			cout << "\nEnter your error message: ";
			cin >> errorm;
			return errorm;
		}
		else
		{
			return "\nValue out of bounds, try again: ";
		}

	}

	int upm(string _upperbound)
	{
		int up = 0;

		if (_upperbound == "me")
		{
			cout << "\nEnter your upper bound: ";
			cin >> up;
			return up;
		}
		else
		{
			return 100;
		}
	}

	int lowm(string _lowerbound)
	{
		int low = 0;

		if (_lowerbound == "me")
		{
			cout << "\nEnter your lower bound: ";
			cin >> low;
			return low;
		}
		else
		{
			return 1;
		}
	}


};

