#include <iostream>
#include <algorithm>

//�������� ���ķ� �ٲٴ°� �ƴ϶�, �������� �ٲٴ� �� �������

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);
	
	int ary[20];
	int start = 0, end = 0;

	for (int i = 0; i < 20; i++)
		ary[i] = i + 1;

	
	for (int i = 0; i < 10; i++) {
		std::cin >> start >> end;
		int tmp = 0;
		for (int k = 0; k <= ((start+end)/2) - start; k++)
		{
			tmp = ary[start+k-1];
			ary[start + k-1] = ary[end - k-1];
			ary[end - k-1] = tmp;
		}
	}


	for (int i = 0; i < 20; i++)
		std::cout << ary[i] << " ";

	return 0;
}