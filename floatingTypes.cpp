#include <iostream>
#include <iomanip>

using namespace std;

int floatingTypes(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	float fValue = 123.456789;
	cout << "size of float       : " << sizeof(float) << endl;
	cout << "fValue              : " << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << "size of double      : " << sizeof(double) << endl;
	cout << "dValue              : " << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.456789;
	cout << "size of long double : " << sizeof(long double) << endl;
	cout << "lValue              : " << setprecision(20) << fixed << lValue << endl;
	
	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
