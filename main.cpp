#include <iostream>

using namespace std;

extern int variables    (void);
extern int strings      (void);
extern int input        (void);
extern int integerTypes (void);
extern int floatingTypes(void);
extern int otherTypes   (void);
extern int _if          (void);
extern int loop         (void);
extern int array        (void);
extern int _switch      (void);

int main()
{
	variables();
	strings();
	input();
	integerTypes();
	floatingTypes();
	otherTypes();
	_if();
	loop();
	array();
	_switch();

	return 0;
}
