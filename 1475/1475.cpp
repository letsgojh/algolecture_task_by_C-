#include <iostream>
#include <algorithm>

//배열 최대, 최소 다룰때는 max_element, min_element사용
//max_element 와 min_element는 전부 주솟값 반환
//6과 9에 해당하는 배열 값에 그냥 더해놓고 /2 하면 필요한 세트 수 나온다.
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