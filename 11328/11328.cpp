#include <iostream>

int N = 0, flag = 1;

std::string a;
std::string b;

// �ݷ� 
// 1
// abcde abcd -> result : possible , ���� : impossible
int main(void) {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> N;

	
	for (int i = 0; i < N; i++) {
		flag = 1;
		int ary1[27] = {};
		int ary2[27] = {};
		std::cin >> a >> b;

		for (int k = 0; k < a.length(); k++)
			ary1[int(a[k]) - 97]++;

		for (int k = 0; k < b.length(); k++) 
			ary2[int(b[k]) - 97]++;

		for (int k = 0; k < 27; k++) { // ��ȸ�ϸ� �迭�� �ϳ��� �ٸ��� impossible, ��� ������ possible
			if (ary1[k] != ary2[k]) {
				flag = 0;
				break;
			}
		}
		
		if (flag == 0)
			std::cout << "Impossible"<<"\n";
		else
			std::cout << "Possible"<<"\n";
	}
	return 0;
}