#include <iostream>

int main()
{
	//n % 100 != 0
	//n > 150000

	// a = 100, b = 200, c = 500, d = 1000, e = 2000, f = 5000;



	int n;
	std::cin >> n;
	int f, e, d, c, b, a;
	

	
	if (!(n % 100 != 0 || n > 150000)){
		int draft = n;

		f = n / 5000;
		std::cout << "5k banknote = " << f << "\n";

		f *= 5000;
		draft = n - f;
		std::cout << "residual amount = " << draft << "\n";
		//-----------------------------------------------------
		e = draft / 2000;
		std::cout << "2k banknote = " << e << "\n";

		e *= 2000;
		draft = draft - e;
		std::cout << "residual amount = " << draft << "\n";
		//-----------------------------------------------------
		d = draft / 1000;
		std::cout << "1k banknote = " << d << "\n";

		d *= 1000;
		draft = draft - d;
		std::cout << "residual amount = " << draft << "\n";
		//-----------------------------------------------------
		c = draft / 500;
		std::cout << "500 banknote = " << c << "\n";

		c *= 500;
		draft = draft - c;
		std::cout << "residual amount = " << draft << "\n";
		//-----------------------------------------------------
		b = draft / 200;
		std::cout << "200 banknote = " << b << "\n";

		b *= 200;
		draft = draft - b;
		std::cout << "residual amount = " << draft << "\n";
		//-----------------------------------------------------
		a = draft / 100;
		std::cout << "100 banknote = " << a << "\n";

		a *= 100;
		draft = draft - a;
		std::cout << "residual amount = " << draft << "\n";
	}
	else std::cout << "n > 150k or n % 100 != 0" << "\n";
	
};