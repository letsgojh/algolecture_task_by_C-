#include <iostream>

int N = 0, K = 0, ary[2][7] = { {} }, sex = 0,grade = 0, ans = 0;

//c++ 동적배열 할당 int *ary = new int[6];

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	std::cin >> N >> K;
	for (int i = 0; i < N; i++) {
		std::cin >> sex >> grade;
		ary[sex][grade]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int k = 1; k < 7; k++) {
			if (ary[i][k] != 0) {
				if (ary[i][k] % K == 0)
					ans += (ary[i][k] / K);
				else
					ans += (ary[i][k] / K) + 1;
			}
		}
	}

	std::cout << ans;

	return 0;

}