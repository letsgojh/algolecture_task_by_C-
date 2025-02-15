#include <iostream>


//전역변수의 초기값은 0

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[9], Max = 0, idx = 0;

	for (int i = 0; i < 9; i++) {
		std::cin >> ary[i];
		
		if (ary[i] > Max) {
			Max = ary[i];
			idx = i+1;
		}
	}

	std::cout << Max << "\n" <<idx;

	return 0;
}