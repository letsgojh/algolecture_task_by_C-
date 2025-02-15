#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int num = 0;
	int sum = 0;
	int odd = 100;

	for (int i = 0; i < 7; i++) {
		std::cin >> num;
		if (num % 2 == 1) {
			sum += num;

			if (odd > num)
				odd = num;
		}
	}

	if (sum == 0)
		std::cout << -1;
	else {
		std::cout << sum << "\n";
		std::cout << odd;
	}
}