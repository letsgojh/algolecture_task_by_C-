#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

//using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, X = 0;

	std::cin >> N >> X;

	std::vector<int> v(N);

	for (int i = 0; i < N; i++)
		std::cin >> v[i];

	for (int i = 0; i < N; i++)
		if (v[i] < X)
			std::cout << v[i]<< " ";
}