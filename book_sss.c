#include <stdio.h>
#include <Windows.h>

// 112p �ڵ��� ����ӵ� ���

/*

1. ���� 
�ڵ��� ����Ÿ��� ���� �ð��� �Է¹޾� ���� �ӵ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ� �� �߸��Ͽ� �ð��� 0���� �Է��ϸ� ���Ұ� !
�� ����ϰ� ��������� ���α׷��� ���� ���� ��Ų��.

-> �� t = h*60+m
*/

int P112Distance() {
	double s, v, t;
	long h, m;

	puts("���� �Ÿ�: "); scanf_s("%lf", &s);
	puts("\n���� �ð�: "); scanf_s("%ld%ld", &h, &m);

	t = h * 60 + m;
	size_t x = s / (t / 60);
	system("cls");
	printf("���� �Ÿ�: %lf\n���� �ð�: %ld�ð�%ld��\n����ӵ�: %zd", s, h, m,x);
}

int P114PayCal() { // ����ö ��� ���
	const long base = 1000;
	long dist = 0;
	long fare = 0;
	printf("�Ÿ�: "); scanf_s("%lf", dist); 

	if (dist <= 10) {
		fare = base;
	}
	else if (dist > 10 && dist <= 20) {
		fare = base + 500;
	}
	else if (dist > 20 && dist <= 35) {
		fare = base + 1000;
	}
	else if (dist >= 35) {
		fare = base + 1500;
	}

	puts("���: %ld", fare);

	return 0;
}

int main(void) {
	printf("������ �Լ��� ���� ����;");
	return 0;
}