#pragma once
#include <iostream>
using namespace std;

class validator {

public:

	int looping(int lowerbound_, int upperbound_, string prompting_, string errorm_)
	{
		int valuein = 0;
		bool check = false;
		cout << "\nUpper bound: " << upperbound_ << " and lower bound: " << lowerbound_ << endl;;

		while (!check)
		{
			cout << "\n" << prompting_ << " OR  enter '-0' to exit program: " << endl;
			cin >> valuein;

			if (valuein > lowerbound_ && valuein < upperbound_)
			{
				check = true;
			}
			else if (valuein < lowerbound_ && valuein > upperbound_)
			{
				cout << "\n" << errorm_ << endl;
				check = false;
			}
			else if (valuein == -0)
			{
				break;
			}

		}

		return valuein;

	}

	string looping(string _callerstring)
	{
		string valid_S = _callerstring;

		if (valid_S == " ")
		{
			cout << "Your string is empty! Enter a valid string: \n";
			while (_callerstring == " ")
			{
				cin >> valid_S;
			}

		}

		return valid_S;
	}


};


