#include <iostream>
#include <algorithm>
#include <numeric>


//max,min 함수는 특정 개수의 수에서 최대, 최소를 찾아준다.
//배열내에서 최대, 최소를 찾으려면 max_element,min_element를 사용해주자
//max_element 와 min_element는 주소를 반환한다.(max_element(시작위치,끝위치)
//accumulate함수는 함수 내 값을 더해준다.(accumulate(시작위치,끝위치,초기값)
//초기값은 int면 0, long 이면 0L을 적어주면된다.


int* sort(int ary[]);

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int ary[5], avg = 0,middle = 0;
	
	for (int i = 0; i < 5; i++)
		std::cin >> ary[i];
	
	avg = std::accumulate(ary, ary + 5,0)/5; //accumulate함수 사용
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