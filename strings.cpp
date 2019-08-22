#include <iostream>
#include <string.h>

using namespace std;

int strings(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	/* string is class here and text1 is an object of string class type */
	string text1 = "Hello ";
	string text2 = "Vinay";

	string text3 = text1 + text2;

	cout << text3 << endl;

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
