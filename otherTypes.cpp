#include <iostream>
#include <string.h>

using namespace std;

int otherTypes(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	bool bValue = true;

	cout << "bValue = " << bValue << endl;

	char cValue = 55;

	cout << "cValue = " << cValue << endl;

	cValue = '7';

	cout << "cValue = " << cValue << endl;

	cValue = '7';

	cout << "int(cValue) = " << int(cValue) << endl;

	cout << "size of char = " << sizeof(char) << endl;

	wchar_t wValue = '7';
	cout << (char)wValue << endl;
	cout << "size of wchar_t : " << sizeof(wchar_t) << endl;

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
