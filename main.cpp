#include<iostream>

int main() {
	int num;
	std::cout << "������ �� ���� ���ðڽ��ϱ�?";
	std::cin >> num;
	for (int i = 0; i < 10; i++) {
		std::cout << i * num << '\t';
	}
	
}
