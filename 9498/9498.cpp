#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int N = 0;

	std::cin >> N;

	if (N >= 90)
		std::cout << "A";
	else if (N >= 80)
		std::cout << "B";
	else if (N >= 70)
		std::cout << "C";
	else if (N >= 60)
		std::cout << "D";
	else
		std::cout << "F";
	
	return 0;
}