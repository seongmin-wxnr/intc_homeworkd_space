#include <stdio.h>
#include <windows.h>


typedef unsigned long UNLG;
/*
다음은 2개 마트에서 판매하는 음료수 목록이다.



A 마트 : 진저에일, 클럽소다, 파워에이드, 콜라, 환타, 포카리스웨터, 레쓰비,딸기우유

,

B 마트 : 오렌지쥬스, 딸기쥬스, 조니워터, 콜라, 사이다, 환타, 포카리스웨터, 진저에일,

바나나우유



다음 기능을 수행하는 함수(들을)를 작성하여 아래 문제를 해결하세요.

(main함수에서 결과 출력하는 함수(들을)를 호출)



(1) 두 업체에서 공통으로 판매되는 음료수를 찾아서 그 결과를 출력



(2) A 업체에서만 판매하는 음료수를 찾아서 그 결과를 출력



(3) B 업체에서만 판매하는 음료수를 찾아서 그 결과를 출력

*/ 
 

const char list_A[8][144] = {
		"진저에일",
		"클럽소다",
		"파워에이드",
		"콜라",
		"환타",
		"포카리스웨터",
		"레쓰비",
		"딸기우유"
	};
const char list_B[8][144] = {
		"오랜지쥬스",
		"딸기우유",
		"조니워터",
		"콜라",
		"사이다",
		"환타",
		"포카리스웨터",
		"진저에일"
	};
const UNLG total_sizeofA = sizeof(list_A);
const UNLG total_sizeofB = sizeof(list_B);

UNLG main_list() {
	printf_s("=== A마켓 판매 물품 리스트 ===\n\n");
	for (int i = 0; i < 8; i++) {
		for (int z = 0; z < 12; z++) {
			printf("%c", list_A[i][z]);
		}
		printf("\n");
	}
	printf_s("\n=== B마켓 판매 물품 리스트 ===\n\n");
	for (int i = 0; i < 8; i++) {
		for (int z = 0; z < 12; z++) {
			printf("%c", list_B[i][z]);
		}
		printf("\n");
	}
}
UNLG user_input() {
	printf_s("----------------------------------------------------\n1. A , B 업체 음료 확인\n2. A , B 두 업체에서 동일하게 판매 중인 상품 확인\n3. A 업체에서만 판매 하는 음료 확인\n4. B 업체에서만 판매 하는 음료 확인\n5. 프로그램 종료\n----------------------------------------------------\n입력: ");
}

char isCorresponed() {
	printf("=== A,B마트 동일 판매 상품 리스트 ===\n");
	for (int i = 0; i < 8; i++) {
		for (int z = 0; z < 8; z++) {
			if (strcmp(list_A[i], list_B[z]) == 0) {
				printf("%s\n", list_A[i]);
				break;
			} 
		}
		 
	}
}
 
char isOnlyCorresponed_A() {
	for (int i = 0; i < 8; i++) {        
		int isCorresponed_v = 0; // default : false;
		for (int z = 0; z < 8; z++) {
			if (strcmp(list_A[i], list_B[z]) == 0) {
				isCorresponed_v = 1;
				break;
			}	 
		}
		if (!isCorresponed_v) { // !0 -> A != B
			printf_s("%s\n", list_A[i]);
		}
	}
	/*
	1 2 3 
	4 5 2
	6 4 2
	
	2 2 1
	4 2 2
	6 1 1
	*/
}

char isOnlyCorresponed_B() {
	for (int i = 0; i < 8; i++) {
		int isCorresponed_v = 0;
		for (int z = 0; z < 8; z++) {
			if (strcmp(list_B[i], list_A[z]) == 0) {
				isCorresponed_v = 1;
				break;
			}

		}
		if (!isCorresponed_v) {
			printf_s("%s\n", list_B[i]);
		}
	}
}
 

int main(void) {
	user_input();
	int aa;
	scanf_s("%d", &aa);

	switch (aa) {
	case 1:
		system("cls");
		main_list();
		break;
	case 2:
		system("cls");
		isCorresponed();
		break;
	case 3:
		system("cls");
		isOnlyCorresponed_A();
		break;
	case 4:
		system("cls");
		isOnlyCorresponed_B();
		break;
	case 5:
		system("cls");
		printf_s("사용자 요청에 의한 프로그램 종료");
		exit(1);
		break;
	default:
		system("cls");
		printf_s("VALUE ERROR");
		user_input();
		break;
	}
	return 0;
}