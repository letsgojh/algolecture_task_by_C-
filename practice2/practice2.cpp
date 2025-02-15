#include <iostream>

void func2(int arr[], int N) {
	int ary[100];
	for (int i = 0; i < 100; i++)
		ary[i] = 0;

	for (int i = 0; i < N; i++) {
		ary[arr[i]] = 1;

		if (ary[100 - arr[i]] == 1) {
			std::cout << 1;
			return;
		}
	}
	std::cout << 0;
}

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[2];

	for (int i = 0; i < 2; i++)
		std::cin >> ary[i];

	func2(ary, sizeof(ary));
}