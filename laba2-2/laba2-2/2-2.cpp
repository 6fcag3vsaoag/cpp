#include <iostream>
using namespace std;
int main()
{
	int m;
	cout << "m: \n";
	cin >> m;
	switch (m)
	{	case 1: cout << "\nPIKI"; break;
	case 2: cout << "\nTREFY"; break;
	case 3: cout << "\nBYBEN"; break;
	case 4: cout << "\n4ervi"; break;
	default: cout << "\nYou entered wrong number";
	}
	return 0;
}