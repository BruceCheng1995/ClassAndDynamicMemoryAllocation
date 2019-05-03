#include <iostream>
#include "Cow.h"
using namespace std;
int main()
{
	Cow c1,c3;
	cout << "Init" << endl;
	c1.ShowCow();
	Cow c2("BulaBula", "Eat", 100);
	c3 = c2;
	c2.ShowCow();
	c3.ShowCow();

	cout << "\nHello..." << endl;
	return 0;
}