//
// Created by Arkitio on 2022-11-29.
//
#include "stdio.h"
#include "stdbool.h"
#define NAME_LEN 100


typedef struct account {
    char name[NAME_LEN];
    int id;
    int balance;
} B_ACCOUNT;

int is_login = false;

void do_login(B_ACCOUNT *bk_account, int input_id){
    if (input_id == bk_account->id){is_login = true;}
}

void print_main_page(B_ACCOUNT *bk_account){
    if (!is_login){
        int input_pw;
        printf("%s의 계좌\nPIN번호를 입력해주세요>> ", bk_account->name);
        scanf("%d", &input_pw);
        getchar();
        do_login(bk_account, input_pw);
    }
    char *str = "==========ATM==========\n"
                "1. 잔액 확인\n"
                "2. 현금 인출\n"
                "3. 현금 입금\n"
                "4. 종료 (로그아웃)\n"
                "=======================\n";
    printf("%s", str);
}

int get_menu_num(){
    printf(">> ");
    int choose;
    do {
        scanf("%d", &choose);
        getchar();
    }while(choose <= 1 && choose >= 4);
    return choose;
}

void check_balance(B_ACCOUNT *bk_account){
    if (!is_login){
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    printf("현재 %d원 있습니다.\n", bk_account->balance);
}

void withdraw(B_ACCOUNT *bk_account, int amount){
    if (!is_login){
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    if ((bk_account->balance - amount) < 0) {
        printf("잔액이 충분하지 않습니다.\n");
        return;
    }
    bk_account->balance -= amount;
    printf("%d원 인출 하였습니다.\n"
           "잔액 %d원\n", amount, bk_account->balance);
}

void deposit(B_ACCOUNT *bk_account, int amount){
    if (!is_login){
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    bk_account->balance += amount;
    printf("%d원 입금 하였습니다.\n"
           "잔액 %d원\n", amount, bk_account->balance);
}


int main(){
    B_ACCOUNT List[] = {
            {"김철수", 1234, 10000}
    };
    int start_loop = true;
    while (start_loop){
        print_main_page(List);
        int choose = get_menu_num();
        switch (choose) {
            case 1:
                check_balance(List);
                break;
            case 2:
                printf("얼마를 인출하시겠습니까? >> ");
                int withdraw_money;
                scanf("%d", &withdraw_money);
                getchar();
                withdraw(List, withdraw_money);
                break;
            case 3:
                printf("얼마를 입금하시겠습니까? >> ");
                int deposit_money;
                scanf("%d", &deposit_money);
                getchar();
                deposit(List, deposit_money);
                break;
            case 4:
                start_loop = false;
                break;
            default:
                printf("메뉴에서 선택해 주세요..\n");
        }

    }
    return 0;
}