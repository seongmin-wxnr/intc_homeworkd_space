#include <iostream>
#include <Windows.h>
#include <vector>

struct vpVar {
	std::vector<unsigned long> drink_;

	unsigned long input_a, input_b; 
	unsigned long amount;
}; struct vpVar v;

unsigned long daily_stock = 100;

 
int main_screen() {
	
	std::cout << "1. Ŀ�� : 1,500��\n2. �ֽ� : 1,000��\nƼ : 500��" << std::endl;
	std::cin >> v.input_a , v.amount;
	
	switch (v.input_a) {
	case 1:
		// ������ ���

	case 2:
		// �ٸ� ������ ���

	case 3:
		// �� �ٸ� ����

	default:
		std::cout << "���� ����" << std::endl;
	}
}

unsigned long drink_main(DWORD cin,DWORD amount) {
	for (int i = 1; i >= 3; i++) {
		v.drink_.push_back(daily_stock);
 
	}
	switch (cin) {
	case 1:
		// Ŀ�� , ���� 

		//��� :  v.drink_[0] = v.drink_[0] - amount;
		// ��� -> 
		break;
	case 2:
		// �ֽ� , ���� 

		//��� : v.drink_[1] =  v.drink_[1] - amount;
		// ��� ->
		break;
	case 3:
		// Ƽ , ���� 

		//��� :  v.drink_[2] = v.drink_[2] - amount;
		// ��� -> 
		break;
	}
}

int main() {
	main_screen();
	return 0;
}