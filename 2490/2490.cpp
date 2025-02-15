#include <iostream>
#include <algorithm>

int main(void) {
	int ary[4];

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int k = 0; k < 4; k++){
			std::cin >> ary[k];
			sum += ary[k];
		}
		
		switch(sum) {
			case 1:
				std::cout << "C\n";
				break;
			case 2:
				std::cout << "B\n";
				break;
			case 3:
				std::cout << "A\n";
				break;
			case 0:
				std::cout << "D\n";
				break;
			default:
				std::cout << "E\n";
		}
	}
}