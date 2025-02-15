#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int A, B = 0;
	std::cin >> A >> B;
	std::cout << A + B << "\n";
	std::cout << A - B << "\n";
	std::cout << A * B << "\n";
	std::cout << A / B << "\n";
	std::cout << A % B << "\n";

	return 0;

}