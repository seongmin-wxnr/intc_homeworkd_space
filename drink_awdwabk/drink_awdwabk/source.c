/*
#include "header.h" << 기존 코딩 때는 header.h로 이용했지만 .c 파일 한개만 제출해야하기에 3개 다 아래 선언했습니다. 
header.h를 선언해서 쓰던 , 3개를 나열해서 쓰던 차이는 없지만 간결하게 쓰는 것을 선호하여 사용했습니다.
*/ 

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
 
struct pVar { // 구조체 정의 -> 변수 많이 선언 될 거 같아서 만들었는데 생각 보다 적었습니다.
    DWORD c_p, j_p, t_p;
};
struct pVar v;

// 기초 
unsigned long amount_ice_coffee = 100;
unsigned long amount_orange_juice = 100;
unsigned long amount_green_tea = 100; // 기초 값
 

int initial_screen() { // 초기화면 함수화 
    DWORD inputs_drink, amount;
    v.c_p = 2200;
    v.j_p = 1400;
    v.t_p = 850;
 
    printf("1. 아이스아메리카노 : 2,200원\n2. 오랜지 주스 : 1,400원\n3. 녹차 : 850원\n[음료 재고]\n1. 아이스아메리카노: %lu개\n2. 오랜지 주스: %lu개\n3. 녹차: %lu개\n음료의 번호와 주문하실 수량을 입력: ", amount_ice_coffee, amount_orange_juice, amount_green_tea);
    scanf_s("%lu %lu", &inputs_drink, &amount);
    system("cls");
    if ((amount_ice_coffee + amount_orange_juice + amount_green_tea)>0) {
        drink_storage(inputs_drink, amount);
    }
    else {
        printf("재고가 없습니다."); exit(1);
    }
     
    return 0;
}

unsigned long drink_storage(DWORD cin, DWORD amount) { // 중심 함수
    while (1) {
        int inputs_a = 0;  // 변수 초기화 
        int inputs_b = 0;
        switch (cin) {
        case 1:
            printf("%lu개의 아이스아메리카노를 %lu원에 구매하시겠습니까?", amount, amount * v.c_p);
            printf("\n1: 구매\n2: 취소\n입력: ");
            scanf_s("%d", &inputs_a);  // 사용자의 입력을 받습니다.

            if (inputs_a == 1) { // 만일 사용자가 1을 입력한다면 =
                if (amount_ice_coffee > 0) {
                    system("cls");
                    printf("%lu개의 아이스아메리카노 구매 완료\n", amount);
                    printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                    amount_ice_coffee = amount_ice_coffee - amount;
                    scanf_s("%d", &inputs_b); // 사용자의 입력을 받습니다.

                    if (inputs_b == 1) { // 1을 입력한다면 초기화면으로 돌아갑니다.
                        system("cls");
                        initial_screen();
                    }
                    else {
                        exit(1); // 2를 입력한다면 프로그램 종료
                         
                    }
                }
                else {
                    system("cls");
                    printf("죄송합니다 아이스아메리카노의 수량이 전부 떨어졌습니다.");
                    exit(1);
                }
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                scanf_s("%d", &inputs_b);

                if (inputs_b == 1) {
                    system("cls");
                    initial_screen();
                }
                else {
                    exit(1);
                }
                 
            }
            break;
        case 2:
            system("cls");
            printf("%lu개의 오랜지주스를 %lu원에 구매하시겠습니까?\n", amount, amount * v.j_p);
            printf("1: 구매\n2: 취소\n입력: ");
            scanf_s("%d", &inputs_a);

            if (inputs_a == 1) {
                if (amount_orange_juice > 0) {
                    system("cls");
                    printf("%lu개의 오랜지주스 구매 완료\n", amount);
                    printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                    scanf_s("%d", &inputs_b);
                    amount_orange_juice = amount_orange_juice - amount;

                    if (inputs_b == 1) {
                        system("cls");
                        initial_screen();
                    }
                    else {
                        exit(1);
                    }
                }
                else {
                    system("cls");
                    printf("죄송합니다 오랜지주스의 수량이 전부 떨어졌습니다.");
                    exit(1);
                }
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                scanf_s("%d", &inputs_b);

                if (inputs_b == 1) {
                    system("cls");
                    initial_screen();
                }
                else {
                    exit(1);
                }
                 
            }
            break;
 

        case 3:
            system("cls");
            printf("%lu개의 녹차를 %lu원에 구매하시겠습니까?\n", amount, amount * v.t_p);
            printf("1: 구매\n2: 취소\n입력: ");
            scanf_s("%d", &inputs_a);

            if (inputs_a == 1) {
                if (amount_green_tea > 0) {
                    system("cls");
                    printf("%lu개의 녹차 구매 완료\n", amount);
                    printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                    scanf_s("%d", &inputs_b);
                    amount_green_tea = amount_green_tea - amount;

                    if (inputs_b == 1) {
                        system("cls");
                        initial_screen();
                    }
                    else {
                        exit(1);
                    }
                }
                else {
                    system("cls");
                    printf("죄송합니다 녹차의 수량이 전부 떨어졌습니다.");
                    exit(1);
                }
                
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. 초기화면\n2. 프로그램 종료\n입력: ");
                scanf_s("%d", &inputs_b);

                if (inputs_b == 1) {
                    system("cls");
                    initial_screen();
                }
                else {
                    system("cls");
                    system("pause");
                }
            }
            break;

        default:
            printf("잘못된 입력입니다. 다시 시도하세요.\n");
            initial_screen();
            break;
            return 0;
        }
    }
}

int main(void) { // entry point -> 진입점
    initial_screen();
}
