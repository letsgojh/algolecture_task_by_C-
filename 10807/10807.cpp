#include <iostream>



//�޸� Ÿ��Ʈ �� �� �ƴϸ� �ǵ��� ���������� ���
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
