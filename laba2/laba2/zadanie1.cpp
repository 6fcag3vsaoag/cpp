#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	if (y >= 0)
		if (x * x + y * y <= 100 && x * x + y * y >= 25)
			cout << "YES";

		else cout << "NO";
	else cout << "NO";
	return 0;
}