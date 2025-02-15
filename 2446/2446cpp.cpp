#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int N = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) 
			std::cout << " ";
		for (int k = 0; k < 2 * (N - i)-1; k++) 
			std::cout << "*";
		std::cout << "\n";
	}

	for (int i = 1; i < N; i++) {
		for (int k = 0; k < N - i - 1; k++)
			std::cout << " ";
		for (int k = 0; k < 2 * i + 1; k++)
			std::cout << "*";
		std::cout << "\n";
	}

	return 0;
}