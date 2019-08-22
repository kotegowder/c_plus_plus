#include <iostream>
#include <string.h>

using namespace std;

int input(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	string text;

	cout << "Enter your name : " << flush;
	cin >> text;

	cout << "Hello "<< text << endl;
	
	int age;
	cout << "Enter your age : " << flush;
	cin >> age;

	if (age >= 30) {
		cout << "You are uncle" << endl;
	} else {
		cout << "I like you" << endl;
	}

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
