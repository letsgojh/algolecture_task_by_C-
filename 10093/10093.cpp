#include <iostream>
#include <algorithm>

int main(void) {
	long long A = 0, B = 0;
	std::cin >> A >> B;

	long long Max = std::max(A, B);
	long long Min = std::min(A, B);
	int cnt = Max - Min-1;
	
	
	if (cnt <= 0)
		std::cout << 0;
	else {
		std::cout << cnt <<"\n";
		for (long long start = Min + 1; start < Max; start++)
			std::cout << start << " ";
	}

	return 0;
}