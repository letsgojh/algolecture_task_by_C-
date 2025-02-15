#include <iostream>
#include <vector>


int N = 0, ary[2000001], input = 0, X = 0, ans = 0;
//int v[100001] = {};
//백터로 했을때는 outofbounds error, 정적으로 배열 생성시 error 안난다.
//메인함수에서 스택 메모리 다 찼으며, 힙으로 메모리 옮기라고 하면 전역변수로 바꿔주면된다.

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	std::cin >> N;

	std::vector<int> v(N);
	
	for (int i = 0; i < 2000001; i++)
		ary[i] = 0;
	
	for (int i = 0; i < N; i++){
		std::cin >> v[i];
		ary[v[i]] = 1;
	}

	std::cin >> X;

	for (int i = 0; i < N; i++) {
		if (ary[X - v[i]] == 1)
			ans += 1;
	}

	std::cout << ans/2;
	
	return 0;

}