#include <iostream>

using namespace std;

#define MAX 10
#define ROW 2
#define COL 3

int array(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;
	
	int ar[MAX];

	for(int i=0; i<MAX; i++) {
		ar[i] = i*i;
	}

	cout << "size of ar : " << sizeof(ar) << endl;
	for(int i=0; i<MAX; i++) {
		cout << "ar[" << i <<"] = " << ar[i] << endl;
	}

	string animals[ROW][COL] = {
		{"dogs", "cats", "rats"},
		{"parrot", "dove", "crow"}
	};

	cout << "size of animals    : " << sizeof(animals) << endl;
	cout << "size of animals[0] : " << sizeof(animals[0]) << endl;
	cout << "size of animals[1] : " << sizeof(animals[1]) << endl;

	for(int row=0; row<ROW; row++) {
		cout << "In row : " << row << endl;
		for(int col=0; col<COL; col++) {
			cout << "\t" << animals[row][col];
		}
		cout << endl;
	}

	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
