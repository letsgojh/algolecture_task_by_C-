#include <iostream>

int main(void) {

	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int N = 0;

	std::cin >> N;

	if (((N % 4 == 0) && (N % 100 != 0)) || (N % 400 == 0))
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}