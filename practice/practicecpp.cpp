#include <iostream>
#include <list>

//iterator�� �����Ϳ� ����� ����ϴ�. vector, deque, set, map, list
//���� ���� ����(����) �� �� ��� (stack, queue ���� ����.)
int main(void) {
	std::list<int> L = { 1,2 };
	std::list<int>::iterator t = L.begin(); // t�� 1�� ����Ų��.
	L.push_front(10); // 10 1 2
	std::cout << *t << "\n";
	L.push_back(5); // 10 1 2 5
	L.insert(t, 6); //t�� ����Ű�� �� "�տ�" 6�� ���� 10 6 1 2 5
	t++; //t�� ��ĭ ���� *t�� 2
	t = L.erase(t); //t�� ����Ű�� �� ����, ���� ������ 5�� ��ġ ��ȯ
	
	for (auto i : L)
		std::cout << i << " ";
}