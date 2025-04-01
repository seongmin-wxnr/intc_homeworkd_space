#include <stdio.h>
#include <Windows.h>

// 112p 자동차 주행속도 계산

/*

1. 문제 
자동차 주행거리와 주행 시간을 입력받아 주행 속도를 계산하는 프로그램을 작성하시오 단 잘못하여 시간을 0으로 입력하면 계산불가 !
를 출력하고 정상종료로 프로그램을 강제 종료 시킨다.

-> 논리 t = h*60+m
*/

int P112Distance() {
	double s, v, t;
	long h, m;

	puts("주행 거리: "); scanf_s("%lf", &s);
	puts("\n주행 시간: "); scanf_s("%ld%ld", &h, &m);

	t = h * 60 + m;
	size_t x = s / (t / 60);
	system("cls");
	printf("주행 거리: %lf\n주행 시간: %ld시간%ld분\n주행속도: %zd", s, h, m,x);
}

int P114PayCal() { // 지하철 요금 계산
	const long base = 1000;
	long dist = 0;
	long fare = 0;
	printf("거리: "); scanf_s("%lf", dist); 

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

	printf("요금: %ld", fare);

	return 0;
}

int main(void) {
	printf("실행할 함수는 본인 선택;");
	return 0;
}
