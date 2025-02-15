#include <iostream>
#include <algorithm>

//�迭 �ִ�, �ּ� �ٷ궧�� max_element, min_element���
//max_element �� min_element�� ���� �ּڰ� ��ȯ
//6�� 9�� �ش��ϴ� �迭 ���� �׳� ���س��� /2 �ϸ� �ʿ��� ��Ʈ �� ���´�.
int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int roomNum,ary[10],rest;

	std::cin >> roomNum;

	for (int i = 0; i < 10; i++) 
		ary[i] = 0;

	while (roomNum > 0) {
		rest = roomNum % 10;
		roomNum /= 10;

		if ((rest == 6) || (rest == 9)){
			if (ary[6] > ary[9]) 
				ary[9]++;
			else if (ary[6] < ary[9])
				ary[6]++;
			else
				ary[rest]++;
		}
		else
			ary[rest]++;
	}

	std::cout << *std::max_element(ary,ary+10);

	return 0;
}