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
		a, b == b, a;
	}
	if (a > c) {
		a, c == c, a;
	}
	if (b > c) {
		b, c == c, b;
	}


	if (m > n) {
		m, n == n, m;
	}
	if (m > k) {
		m, k == k, m;
	}
	if (n > k) {
		n, k == k, n;
	}

	if (a == m && b == n && c == k) { std::cout << "Boxes are equal"; }
	else if (a <= m && b <= n && c <= k) { std::cout << "The first box is smaller than the second one"; }
	else if (a >= m && b >= n && c >= k) { std::cout << "The first box is larger than the second one"; }
	else std::cout << "Boxes are incomparable";
};