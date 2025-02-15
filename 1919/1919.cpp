#include <iostream>

int ary[26], ans;
std::string str1;
std::string str2;

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	std::cin >> str1;
	std::cin >> str2;

	for (int i = 0; i < str1.length(); i++)
		ary[int(str1[i]) - 'a']++;
	for (int i = 0; i < str2.length(); i++)
		ary[int(str2[i]) - 'a']--;

	for (int i = 0; i < 26; i++){
		//std::cout << ary[i] << " ";
		if (ary[i] >= 0)
			ans += ary[i];
		else
			ans += ary[i] * -1;
	}

	std::cout << ans;

	return 0;
}