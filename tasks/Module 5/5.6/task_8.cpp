#include <iostream>

int main()
{
	int pYear, pMonth, pDay; // person date
	int cYear, cMonth, cDay; // current date

	std::cin >> pYear >> pMonth >> pDay;
	std::cin >> cYear >> cMonth >> cDay;

	if (pYear - pYear < 18) {
		std::cout << "no\n";
	}
	else if (cYear - pYear > 18) {
		std::cout << "yes\n";
	}
	else if (cMonth > pMonth || (cMonth == pMonth && cDay > pDay)) {
		std::cout << "yes\n";
	}
	else std::cout << "no\n";
};
