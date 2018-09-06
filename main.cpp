// Justin Teeter
// ID: 2574746
// CIS-7 | WWF String Input

#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main()
{
	string input;
	cout << "Enter a well formed formula: " << endl;
	cout << "Type q to exit" << endl;
	cout << "Valid Connectors: ^ V ! -> " << endl;
	cout << "Enter input: ";

	regex reg("^\\s*!?\\s*[A-UW-Z]\\s*((\\^|V|->)\\s*!?\\s*[A-UW-Z]\\s*)*$");

	do
	{
		getline(cin, input);

		if (regex_match(input, reg))
		{
			cout << input << " : Is a valid WFF." << endl;
		}

		else if (input != "q")
		{
			cout << input << " : Is NOT a valid WFF." << endl;
		}

	} while (input != "q");

	return 0;
}
