#include <iostream>
#include <string>

//���ڸ� ���ڷ� �ٲܶ��� to_string, ���ڸ� ���ڷ� �ٲܶ��� stoi
//���ڿ��� ���̸� �궧�� sizeof�� �ƴ� .length()�� ���.

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int A, B, C,ary[10];

	for (int i = 0; i < 10; i++)
		ary[i] = 0;


	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	std::string mult = std::to_string(A * B * C);


	for (int i = 0; i < mult.length(); i++)
		ary[mult[i]-48]++;

	for (int i = 0;i <10;i ++)
		std::cout << ary[i] << "\n";

	return 0;
}