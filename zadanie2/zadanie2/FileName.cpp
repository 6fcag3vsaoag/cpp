#include <iostream>

int main()
{
	setlocale(0, "");
	double R, h, ro, S, V, m;
	const double pi = 3.14159;

	std::cout << "R = ";
	std::cin >> R;

	std::cout << "h = ";
	std::cin >> h;

	std::cout << "ro = ";
	std::cin >> ro;

	S = 2 * pi * R;
	V = pi * R * R * h;
	m = ro * V;


	std::cout << "\n������� S = " << S;
	std::cout << "\n����� V = " << V;
	std::cout << "\n������ R = " <<R;

}