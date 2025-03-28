/*
#include "header.h" << ���� �ڵ� ���� header.h�� �̿������� .c ���� �Ѱ��� �����ؾ��ϱ⿡ 3�� �� �Ʒ� �����߽��ϴ�. 
header.h�� �����ؼ� ���� , 3���� �����ؼ� ���� ���̴� ������ �����ϰ� ���� ���� ��ȣ�Ͽ� ����߽��ϴ�.
*/ 

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
 
struct pVar { // ����ü ���� -> ���� ���� ���� �� �� ���Ƽ� ������µ� ���� ���� �������ϴ�.
    DWORD c_p, j_p, t_p;
};
struct pVar v;

// ���� 
unsigned long amount_coffee = 100;
unsigned long amount_juice = 100;
unsigned long amount_tea = 100; // ���� ��
 

int initial_screen() { // �ʱ�ȭ�� �Լ�ȭ 
    DWORD inputs_drink, amount;
    v.c_p = 1500;
    v.j_p = 1000;
    v.t_p = 500;
 
    printf("1. Ŀ�� : 1,500��\n2. �ֽ� : 1,000��\n3. �� : 500��\n[���� ���]\n1. Ŀ��: %lu��\n2. �ֽ�: %lu��\n3. ��(Tea): %lu��\n������ ��ȣ�� �ֹ��Ͻ� ������ �Է�: ", amount_coffee, amount_juice, amount_tea);
    scanf_s("%lu %lu", &inputs_drink, &amount);
    system("cls");
    if ((amount_coffee + amount_juice + amount_tea)>0) {
        drink_storage(inputs_drink, amount);
    }
    else {
        printf("��� �����ϴ�."); exit(1);
    }
     
    return 0;
}

unsigned long drink_storage(DWORD cin, DWORD amount) { // �߽� �Լ�
    while (1) {
        int inputs_a = 0;  // ���� �ʱ�ȭ 
        int inputs_b = 0;
        switch (cin) {
        case 1:
            printf("%lu���� Ŀ�Ǹ� %lu���� �����Ͻðڽ��ϱ�?", amount, amount * v.c_p);
            printf("\n1: ����\n2: ���\n�Է�: ");
            scanf_s("%d", &inputs_a);

            if (inputs_a == 1) {
                if (amount_coffee > 0) {
                    system("cls");
                    printf("%lu���� Ŀ�� ���� �Ϸ�\n", amount);
                    printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
                    amount_coffee = amount_coffee - amount;
                    scanf_s("%d", &inputs_b);

                    if (inputs_b == 1) {
                        system("cls");
                        initial_screen();
                    }
                    else {
                        system("cls");
                        initial_screen();
                    }
                }
                else {
                    system("cls");
                    printf("�˼��մϴ� Ŀ���� ������ ���� ���������ϴ�.");
                    exit(1);
                }
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
                scanf_s("%d", &inputs_b);

                if (inputs_b == 1) {
                    system("cls");
                    initial_screen();
                }
                else {
                    exit(1);
                }
                break;
            }
 
        case 2:
            system("cls");
            printf("%lu���� �ֽ��� %lu���� �����Ͻðڽ��ϱ�?\n", amount, amount * v.j_p);
            printf("1: ����\n2: ���\n�Է�: ");
            scanf_s("%d", &inputs_a);

            if (inputs_a == 1) {
                if (amount_juice > 0) {
                    system("cls");
                    printf("%lu���� �ֽ� ���� �Ϸ�\n", amount);
                    printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
                    scanf_s("%d", &inputs_b);
                    amount_juice = amount_juice - amount;

                    if (inputs_b == 1) {
                        system("cls");
                        initial_screen();
                    }
                    else {
                        system("cls");
                        system("pause");
                    }
                }
                else {
                    system("cls");
                    printf("�˼��մϴ� �ֽ��� ������ ���� ���������ϴ�.");
                    exit(1);
                }
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
                scanf_s("%d", &inputs_b);

                if (inputs_b == 1) {
                    system("cls");
                    initial_screen();
                }
                else {
                    exit(1);
                }
                break;
            }
 

        case 3:
            system("cls");
            printf("%lu���� ��(Tea)�� %lu���� �����Ͻðڽ��ϱ�?\n", amount, amount * v.t_p);
            printf("1: ����\n2: ���\n�Է�: ");
            scanf_s("%d", &inputs_a);

            if (inputs_a == 1) {
                if (amount_tea > 0) {
                    system("cls");
                    printf("%lu���� �� ���� �Ϸ�\n", amount);
                    printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
                    scanf_s("%d", &inputs_b);
                    amount_tea = amount_tea - amount;

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
                    printf("�˼��մϴ� ���� ������ ���� ���������ϴ�.");
                    exit(1);
                }
                break;
            }
            else if (inputs_a == 2) {
                system("cls");
                printf("\n1. �ʱ�ȭ��\n2. ���α׷� ����\n�Է�: ");
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
 

        default:
            printf("�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���.\n");
            initial_screen();
            return 0;
        }
    }
}

int main(void) { // entry point -> ������
    initial_screen();
}