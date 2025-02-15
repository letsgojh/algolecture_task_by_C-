#include <iostream>
#include <vector>


int N = 0, ary[2000001], input = 0, X = 0, ans = 0;
//int v[100001] = {};
//���ͷ� �������� outofbounds error, �������� �迭 ������ error �ȳ���.
//�����Լ����� ���� �޸� �� á����, ������ �޸� �ű��� �ϸ� ���������� �ٲ��ָ�ȴ�.

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