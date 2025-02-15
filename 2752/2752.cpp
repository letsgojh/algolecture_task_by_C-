#include <iostream>

int main(void) {
	int arr[3];
	int tmp = 0;

	for (int i = 0; i < 3; i++)
		std::cin >> arr[i];

	for (int i = 0; i < 2; i++)
		for (int k = i + 1; k < 3; k++) 
			if (arr[i] > arr[k]) {
				tmp = arr[i];
				arr[i] = arr[k];
				arr[k] = tmp;
			}
		
	for (int i = 0; i < 3; i++) 
		std::cout << arr[i] << " ";

	return 0;
}		