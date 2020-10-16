#include<iostream>

int main() {
	int num;
	std::cout << "구구단 몇 단을 보시겠습니까?";
	std::cin >> num;
	for (int i = 0; i < 10; i++) {
		std::cout << i * num << '\t';
	}
	
}
