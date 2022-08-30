#include <iostream>

int main()
{
	int pYear, pMonth, pDay; // person date
	int cYear, cMonth, cDay; // current date
	int dYear, dMonth, dDay; // different

	std::cin >> pYear >> pMonth >> pDay;
	std::cin >> cYear >> cMonth >> cDay;
	
	dYear = cYear - pYear;
	dMonth = cMonth - pMonth;
	dDay = cDay - pDay;

	if (dYear <= 18)
	{
		if (dMonth == 0)
		{
			if (dDay > 0) std::cout << "ok\n";
			else std::cout << "not ok\n";
		}
		else {
			if (dMonth < 0) std::cout << "not ok\n";
			else std::cout << "ok\n";
		}
	}
	else std::cout << "ok\n";
	std::cout << dDay << "\n" << dMonth << "\n" << dYear;
};