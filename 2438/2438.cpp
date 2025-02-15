#include <iostream>

int main(void) {
	int N = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k <= i; k++)
			std::cout << "*";
		if(i != N-1)
			std::cout << "\n";
	}
	return 0;
}