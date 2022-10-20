//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"

void savings(long);
void print_current(long, long);
int transaction();
void do_login();

int main(){
    do_login();

    return 0;
}


int is_login = 0;
void do_login(){
    int tries =0;
    while(1){
        if (tries >= 5){
            printf("시도횟수를 초과했습니다. 잠시 후 다시 시도해주세요\n");
        }
        int pwd = 0, input = 1;
        printf("비밀번호를 입력해주세요>> ");
        scanf("%d", &input);
        getchar();
        if (pwd == input){
            is_login = 1;
            return;
        }else{
            printf("비밀번호가 일치하지 않습니다.\n");
            tries++;
            continue ;
        }
    }
}



int transaction(){
    printf("=========================\n"
           "%5s   %5s   %10s\n"
           "=========================\n", "입금", "출금", "거래 후 잔액");
    savings(10000);
    savings(-10000);
    savings(-10000);
    return 0;
}

void savings(long amount){
    static long balance = 0;
    if (amount <=0 && balance == 0){
        printf("더이상 출금할 수 없습니다. 잔액을 확인해 주십시오.\n");
        return;
    }else{
        balance += amount;
    }
    print_current(balance, amount);
}

void print_current(long balance, long amount){
    if (amount<0){
        printf("\t%ld\t%ld\n", amount, balance);
    }else{
        printf("%ld\t\t%ld\n", amount, balance);
    }
}