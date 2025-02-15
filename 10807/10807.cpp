#include <iostream>



//메모리 타이트 한 것 아니면 되도록 전역변수로 잡기
int N = 0, ary[201] = {}, x = 0,input = 0;

int main(void) {

	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	std::cin >> N;

	for (int i = 0; i < N; i++){
		std::cin >> input;
		ary[input + 100]++;
	}

	std::cin >> x;

	std::cout << ary[x + 100];

	return 0;
}
