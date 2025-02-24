#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float y, a, b, h;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "h = ";
	cin >> h;

	if (a >= 1 && a <= -1)
		while (a <= b)
		{
			y = sqrt(a * a - 1);
			a = a + h;
			cout << y << " ";
		}


	return 0;
}