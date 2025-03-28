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
	
	std::cout << "1. 커피 : 1,500원\n2. 주스 : 1,000원\n티 : 500원" << std::endl;
	std::cin >> v.input_a , v.amount;
	
	switch (v.input_a) {
	case 1:
		// 뭔가의 기능

	case 2:
		// 다른 뭔가의 기능

	case 3:
		// 또 다른 무언가

	default:
		std::cout << "범위 오류" << std::endl;
	}
}

unsigned long drink_main(DWORD cin,DWORD amount) {
	for (int i = 1; i >= 3; i++) {
		v.drink_.push_back(daily_stock);
 
	}
	switch (cin) {
	case 1:
		// 커피 , 수량 

		//재고 :  v.drink_[0] = v.drink_[0] - amount;
		// 출력 -> 
		break;
	case 2:
		// 주스 , 수량 

		//재고 : v.drink_[1] =  v.drink_[1] - amount;
		// 출력 ->
		break;
	case 3:
		// 티 , 수량 

		//재고 :  v.drink_[2] = v.drink_[2] - amount;
		// 출력 -> 
		break;
	}
}

int main() {
	main_screen();
	return 0;
}