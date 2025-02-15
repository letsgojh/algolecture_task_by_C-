#include <iostream>
#include <list>

//iterator는 포인터와 상당히 비슷하다. vector, deque, set, map, list
//같은 원소 참조(접근) 할 때 사용 (stack, queue 에는 없다.)
int main(void) {
	std::list<int> L = { 1,2 };
	std::list<int>::iterator t = L.begin(); // t는 1을 가르킨다.
	L.push_front(10); // 10 1 2
	std::cout << *t << "\n";
	L.push_back(5); // 10 1 2 5
	L.insert(t, 6); //t가 가르키는 곳 "앞에" 6을 삽입 10 6 1 2 5
	t++; //t를 한칸 전진 *t는 2
	t = L.erase(t); //t가 가르키는 값 제거, 다음 원소인 5의 위치 반환
	
	for (auto i : L)
		std::cout << i << " ";
}