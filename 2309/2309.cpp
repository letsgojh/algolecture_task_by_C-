#include <iostream>
#include <algorithm>
#include <numeric>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[9];

	for (int i = 0; i < 9; i++)
		std::cin >> ary[i];

	int rest = std::accumulate(ary, ary + 9, 0) - 100;
	int lier1 = 0, lier2 = 0;

	for (int i = 0; i < 8; i++) {
		for (int k = i + 1; k < 9; k++) {
			if (ary[i] + ary[k] == rest) {
				lier1 = ary[i];
				lier2 = ary[k];
			}
		}
	}
	
	std::sort(ary, ary + 9); //sort는 return 값 없다

	for (int i = 0; i < 9; i++) {
		if ((ary[i] != lier1) && (ary[i] != lier2))
			std::cout << ary[i] << "\n";
	}

	return 0;
}