//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"

void savings(long);
void print_current(long, long);
int transaction();
int do_login();
void do_logout();

int is_login = 0;// 로그인 혹은 로그아웃시 값 변경 0: 로그인 안됨, 1: 로그인 됨, 2: 시도횟수 초과


int main() {
    while (1) {
        if (is_login == 2) {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
        if (is_login == 0) {
            printf("로그인이 필요합니다.\n");
            is_login = do_login();
            continue;
        }
        transaction();
        if (is_login == 1) {// 로그인 되어있으면 로그아웃
            char out = 'n';
            printf("로그아웃 하시겠습니까? (y/N) >");
            scanf("%c", &out);
            getchar();
            switch (out) {
                case 'y':
                    do_logout();
                    break;
                default:
                    printf("로그아웃 안함\n");
                    continue;
            }
        }
        break;
    }
    return 0;
}

/*
 * 로그인
 */
int do_login() {
    int tries = 0;
    while (1) {
        if (tries >= 5) {
            is_login = 2;
            printf("시도횟수를 초과했습니다. 잠시 후 다시 시도해주세요\n");
            return 2;// 시도횟수 초과
        }
        int pwd = 0, input = 1;  // pwd로 비밀번호 설정
        printf("비밀번호를 입력해주세요>> ");
        scanf("%d", &input);
        getchar();
        if (pwd == input) {
            is_login = 1;
            printf("로그인 성공!\n");
            return 1;// 로그인 성공
        } else {
            printf("비밀번호가 일치하지 않습니다.\n");
            tries++;
            continue;
        }
    }
}

/*
 * 로그아웃
 */
void do_logout() {
    if (is_login == 1) {
        is_login = 0;
    } else {
        printf("로그인 되어있지 않습니다.\n");
    }
}


/*
 * 거래 기능 (총 정리)
 */
int transaction() {
    printf("=========================\n"
           "%5s   %5s   %10s\n"
           "=========================\n",
           "입금", "출금", "거래 후 잔액");
    savings(10000);
    savings(-20000);
    savings(-10000);
    printf("=========================\n");
    return 0;
}

/*
 * 입금 혹은 출금
 */
void savings(long amount) {
    static long balance = 0;
    if ((amount <= 0 && balance == 0) || balance + amount <= 0) {
        printf("더이상 출금할 수 없습니다. 잔액을 확인해 주십시오.\n");
        return;
    } else {
        balance += amount;
    }
    print_current(balance, amount);
}

/*
 * 거래시 "입금 출금 거래후 잔액" 출력
 */
void print_current(long balance, long amount) {
    if (amount < 0) {
        printf("\t%ld\t%ld\n", amount, balance);
    } else {
        printf("%ld\t\t%ld\n", amount, balance);
    }
}