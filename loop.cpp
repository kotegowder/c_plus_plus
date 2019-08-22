#include <iostream>

using namespace std;

int loop(void) {

	cout << "--Running '" << __FILE__ << "'" << endl;

	int cnt = 10;

	while(cnt) {
		cout << "cnt = " << cnt << endl;
		cnt--;
	}

	do
	{
		cout << "In do while loop, cnt = " << cnt << endl;
	}while(cnt);

	for(cnt=10; cnt; cnt--) {
		cout << "cnt = " << cnt << endl;
	}
	cout << "--Finished running '" << __FILE__ << "'" << endl << endl;

	return 0;
}
