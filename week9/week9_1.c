//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"

void savings(long);
void print_current(long, long);
int transaction();
int do_login();
void do_logout();

int is_login = 0;// �α��� Ȥ�� �α׾ƿ��� �� ���� 0: �α��� �ȵ�, 1: �α��� ��, 2: �õ�Ƚ�� �ʰ�


int main() {
    while (1) {
        if (is_login == 2) {
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }
        if (is_login == 0) {
            printf("�α����� �ʿ��մϴ�.\n");
            is_login = do_login();
            continue;
        }
        transaction();
        if (is_login == 1) {// �α��� �Ǿ������� �α׾ƿ�
            char out = 'n';
            printf("�α׾ƿ� �Ͻðڽ��ϱ�? (y/N) >");
            scanf("%c", &out);
            getchar();
            switch (out) {
                case 'y':
                    do_logout();
                    break;
                default:
                    printf("�α׾ƿ� ����\n");
                    continue;
            }
        }
        break;
    }
    return 0;
}

/*
 * �α���
 */
int do_login() {
    int tries = 0;
    while (1) {
        if (tries >= 5) {
            is_login = 2;
            printf("�õ�Ƚ���� �ʰ��߽��ϴ�. ��� �� �ٽ� �õ����ּ���\n");
            return 2;// �õ�Ƚ�� �ʰ�
        }
        int pwd = 0, input = 1;  // pwd�� ��й�ȣ ����
        printf("��й�ȣ�� �Է����ּ���>> ");
        scanf("%d", &input);
        getchar();
        if (pwd == input) {
            is_login = 1;
            printf("�α��� ����!\n");
            return 1;// �α��� ����
        } else {
            printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
            tries++;
            continue;
        }
    }
}

/*
 * �α׾ƿ�
 */
void do_logout() {
    if (is_login == 1) {
        is_login = 0;
    } else {
        printf("�α��� �Ǿ����� �ʽ��ϴ�.\n");
    }
}


/*
 * �ŷ� ��� (�� ����)
 */
int transaction() {
    printf("=========================\n"
           "%5s   %5s   %10s\n"
           "=========================\n",
           "�Ա�", "���", "�ŷ� �� �ܾ�");
    savings(10000);
    savings(-20000);
    savings(-10000);
    printf("=========================\n");
    return 0;
}

/*
 * �Ա� Ȥ�� ���
 */
void savings(long amount) {
    static long balance = 0;
    if ((amount <= 0 && balance == 0) || balance + amount <= 0) {
        printf("���̻� ����� �� �����ϴ�. �ܾ��� Ȯ���� �ֽʽÿ�.\n");
        return;
    } else {
        balance += amount;
    }
    print_current(balance, amount);
}

/*
 * �ŷ��� "�Ա� ��� �ŷ��� �ܾ�" ���
 */
void print_current(long balance, long amount) {
    if (amount < 0) {
        printf("\t%ld\t%ld\n", amount, balance);
    } else {
        printf("%ld\t\t%ld\n", amount, balance);
    }
}