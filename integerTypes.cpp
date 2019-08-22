#include <iostream>
#include <climits>

using namespace std;

int integerTypes(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	cout << "INT_MIN : " << INT_MIN << endl;
	cout << "INT_MAX : " << INT_MAX << endl;

	int value = 646483236646;

	cout << "value = " << value << endl;

	value = 65536;

	cout << "value = " << value << endl;

	cout << "Size of int       : " << sizeof(int) << endl;
	cout << "Size of long      : " << sizeof(long) << endl;
	cout << "Size of long int  : " << sizeof(long int) << endl;
	cout << "Size of short int :  " << sizeof(short int) << endl;
	cout << "Size of long long :  " << sizeof(long long) << endl;

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
