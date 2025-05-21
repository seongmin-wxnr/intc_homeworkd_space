#include <stdio.h>
#include <windows.h>


typedef unsigned long UNLG;
/*
������ 2�� ��Ʈ���� �Ǹ��ϴ� ����� ����̴�.



A ��Ʈ : ��������, Ŭ���Ҵ�, �Ŀ����̵�, �ݶ�, ȯŸ, ��ī��������, ������,�������

,

B ��Ʈ : �������꽺, �����꽺, ���Ͽ���, �ݶ�, ���̴�, ȯŸ, ��ī��������, ��������,

�ٳ�������



���� ����� �����ϴ� �Լ�(����)�� �ۼ��Ͽ� �Ʒ� ������ �ذ��ϼ���.

(main�Լ����� ��� ����ϴ� �Լ�(����)�� ȣ��)



(1) �� ��ü���� �������� �ǸŵǴ� ������� ã�Ƽ� �� ����� ���



(2) A ��ü������ �Ǹ��ϴ� ������� ã�Ƽ� �� ����� ���



(3) B ��ü������ �Ǹ��ϴ� ������� ã�Ƽ� �� ����� ���

*/ 
 

const char list_A[8][144] = {
		"��������",
		"Ŭ���Ҵ�",
		"�Ŀ����̵�",
		"�ݶ�",
		"ȯŸ",
		"��ī��������",
		"������",
		"�������"
	};
const char list_B[8][144] = {
		"�������꽺",
		"�������",
		"���Ͽ���",
		"�ݶ�",
		"���̴�",
		"ȯŸ",
		"��ī��������",
		"��������"
	};
const UNLG total_sizeofA = sizeof(list_A);
const UNLG total_sizeofB = sizeof(list_B);

UNLG main_list() {
	printf_s("=== A���� �Ǹ� ��ǰ ����Ʈ ===\n\n");
	for (int i = 0; i < 8; i++) {
		for (int z = 0; z < 12; z++) {
			printf("%c", list_A[i][z]);
		}
		printf("\n");
	}
	printf_s("\n=== B���� �Ǹ� ��ǰ ����Ʈ ===\n\n");
	for (int i = 0; i < 8; i++) {
		for (int z = 0; z < 12; z++) {
			printf("%c", list_B[i][z]);
		}
		printf("\n");
	}
}
UNLG user_input() {
	printf_s("----------------------------------------------------\n1. A , B ��ü ���� Ȯ��\n2. A , B �� ��ü���� �����ϰ� �Ǹ� ���� ��ǰ Ȯ��\n3. A ��ü������ �Ǹ� �ϴ� ���� Ȯ��\n4. B ��ü������ �Ǹ� �ϴ� ���� Ȯ��\n5. ���α׷� ����\n----------------------------------------------------\n�Է�: ");
}

char isCorresponed() {
	printf("=== A,B��Ʈ ���� �Ǹ� ��ǰ ����Ʈ ===\n");
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
		printf_s("����� ��û�� ���� ���α׷� ����");
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