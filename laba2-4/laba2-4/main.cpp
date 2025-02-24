#include <iostream>
using namespace std;
int main()
{
	int I = 1;
	while (I < 6) 
	{
		int n = -10;
		while (n <= 12)
		{
			cout << n << " "; 
			++n; 
		}
		cout << "\n";
		++I;
	}
	return 0;
}