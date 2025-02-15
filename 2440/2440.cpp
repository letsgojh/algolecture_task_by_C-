#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int N = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = N - i; k > 0; k--)
			std::cout << "*";
		if (i != N - 1)
			std::cout << "\n";
	}

	return 0;
}