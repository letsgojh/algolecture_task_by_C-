#include <iostream>
#include <algorithm>
#include <numeric>


//max,min �Լ��� Ư�� ������ ������ �ִ�, �ּҸ� ã���ش�.
//�迭������ �ִ�, �ּҸ� ã������ max_element,min_element�� ���������
//max_element �� min_element�� �ּҸ� ��ȯ�Ѵ�.(max_element(������ġ,����ġ)
//accumulate�Լ��� �Լ� �� ���� �����ش�.(accumulate(������ġ,����ġ,�ʱⰪ)
//�ʱⰪ�� int�� 0, long �̸� 0L�� �����ָ�ȴ�.


int* sort(int ary[]);

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[5], avg = 0,middle = 0;
	
	for (int i = 0; i < 5; i++)
		std::cin >> ary[i];
	
	avg = std::accumulate(ary, ary + 5,0)/5; //accumulate�Լ� ���
	middle = sort(ary)[2];

	std::cout << avg << "\n"<<middle;
}

int* sort(int ary[]) {

	int temp;

	for (int i = 0; i < 4; i++) {
		for (int k = i + 1; k < 5; k++) {
			if (ary[k] < ary[i]) {
				temp = ary[k];
				ary[k] = ary[i];
				ary[i] = temp;
			}
		}
	}

	return ary;
}