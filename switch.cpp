#include <iostream>

using namespace std;

int _switch(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	int value;

	cout << "Enter number : " << flush;
	cin >> value;

	switch(value)
	{
		case 1:
			cout << "It is one" << endl;
			break;
		case 2:
			cout << "It is two" << endl;
			break;
		default:
			cout << "Going to default case" << endl;
	}

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
