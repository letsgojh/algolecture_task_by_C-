#include <iostream>
#include <string>

//숫자를 문자로 바꿀때는 to_string, 문자를 숫자로 바꿀때는 stoi
//문자열의 길이를 잴때는 sizeof가 아닌 .length()로 잰다.

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