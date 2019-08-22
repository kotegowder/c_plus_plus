#include <iostream>
#include <iomanip>

using namespace std;

int _if(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	const string password = "hello123";

	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	if (password != input) {
		cout << "Authentication unsuccessful !" << endl;
	} else {
		cout << "Authentication success" << endl;
	}

	float fValue = 1.1;
	if (fValue == 1.1) {
		cout << "float variable comparison success" << endl;
	} else {
		cout << "float variable comparison failed" << endl;
	}

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
