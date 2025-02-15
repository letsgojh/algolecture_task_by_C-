#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[20];
	int cnt = 0,Y = 0,M = 0;

	std::cin >> cnt;

	for (int i = 0; i < cnt; i++){
		std::cin >> ary[i];
		Y += ((ary[i] / 30) + 1) * 10;
		M += ((ary[i] / 60) + 1) * 15;
	}

	Y > M ? std::cout << "M " << M : (Y == M ? std::cout << "Y M " << Y : std::cout << "Y " << Y);

	return 0;
}