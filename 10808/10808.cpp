#include <iostream>

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(nullptr);

	int alpha[26];

	for (int i = 0; i < 26; i++)
		alpha[i] = 0;

	std::string sentance;
	std::cin >> sentance;

	for (int i = 0; i < sentance.size(); i++){
		int idx = int(sentance[i]) - 97;
		alpha[idx]++;
	}
	/*
	for (int i = 0; i < 26; i++)
		std::cout << alpha[i] << " ";
	*/
	for (auto e : alpha)
		std::cout << e << " ";

	return 0;
}