#include <iostream>

int main()
{
	int a, b, c;
	int m, n, k;

	std::cout << "Enther a b c";
	std::cin >> a >> b >> c;
	std::cout << "Enther m n k";
	std::cin >> m >> n >> k;

	if (a > b) {
		int x = 0;
		x = a;
		a = b;
		b = x;
	}
	if (a > c) {
		int x = 0;
		x = a;
		a = c;
		c = x;
	}
	if (b > c) {
		int x = 0;
		x = b;
		b = c;
		c = x;
	}


	if (m > n) {
		int x = 0;
		x = m;
		m = n;
		n = x;
	}
	if (m > k) {
		int x = 0;
		x = m;
		m = k;
		k = x;
	}
	if (n > k) {
		int x = 0;
		x = n;
		n = k;
		k = x;
	}

	if (a == m && b == n && c == k) { std::cout << "Boxes are equal"; }
	else if (a <= m && b <= n && c <= k) { std::cout << "The first box is smaller than the second one"; }
	else if (a >= m && b >= n && c >= k) { std::cout << "The first box is larger than the second one"; }
	else std::cout << "Boxes are incomparable";
};
