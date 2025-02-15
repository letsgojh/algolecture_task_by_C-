#include <stdio.h>
#include <iostream>
#include <algorithm> // max,min 함수 사용하려면 algorithm 전처리 사용

int main(void) {

	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int a, b, c;
	std::cin >> a >> b >> c;

	if ((a == b) && (b == c))
		std::cout << 10000 + a * 1000;
	else if ((a == b) || (a == c))
		std::cout << 1000 + a * 100;
	else if ((a == b) || (b == c))
		std::cout << 1000 + b * 100;
	else
		std::cout << std::max({ a,b,c }) * 100;
	return 0;

}