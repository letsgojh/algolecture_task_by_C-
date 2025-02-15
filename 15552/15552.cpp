#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int N = 0,a = 0, b = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}