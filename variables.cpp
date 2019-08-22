#include <iostream>
#include <string.h>

using namespace std;

int variables(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	int numberCats = 5;
	int numberDogs = 4;

	cout << "Number of cats : " << numberCats << endl;
	cout << "Number of dogs : " << numberDogs << endl;

	cout << "Total number of animals : " << numberCats + numberDogs << endl;

	cout << "New dog acquired" << endl;

	numberDogs += 1;

	cout << "Number of dogs : " << numberDogs << endl;

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
