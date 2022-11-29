//
// Created by Arkitio on 2022-11-29.
//
#include "stdbool.h"// boolean 값 사용 위함
#include "stdio.h"
#define NAME_LEN 100


typedef struct account {// 은행 계정 타입데프
    char name[NAME_LEN];
    int id;
    int balance;
} B_ACCOUNT;

int is_login = false;// 로그인 되어있는지 아닌지 확인

void do_login(B_ACCOUNT *bk_account) {// 로그인 하는 함수 구조체에 있는 id와 입력한 아이디가 같은지 확인
    int input_id;
    printf("\n%s의 계좌\nPIN을  입력해주세요>> ", bk_account->name);
    scanf("%d", &input_id);
    getchar();
    if (input_id == bk_account->id) {
        is_login = true;
    } else {
        printf("PIN이 잘못되었습니다.\n");
    }
}

void print_main_page(B_ACCOUNT *bk_account) {// 메인 페이지 콘솔창에 출력 하는 함수
    while (!is_login) {
        do_login(bk_account);// 로그인이 안되어 있다면 로그인 해준다.
    }
    char *str = "==========ATM==========\n" // 메인 페이지 메뉴 부분
                "1. 잔액 확인\n"
                "2. 현금 인출\n"
                "3. 현금 입금\n"
                "4. 종료 (로그아웃)\n"
                "=======================\n";
    printf("%s", str);
}

int get_menu_num() { // 사용자의 메뉴선택을 하게 해주는 함수
    printf(">> ");
    int choose;
    do {
        scanf("%d", &choose);
        getchar();
    } while (choose < 1 || choose > 4); // 일단 입력 받고 1 ~ 4 의 정수가 아니면 다시 입력 받는다.
    return choose;
}

void check_balance(B_ACCOUNT *bk_account) { // 잔액 확인 하는 함수, 파라메터로 받은 구조체에서 balance를 가져온다. 이하 계좌 관련 함수들은 모두 로그인을 확인한다.
    if (!is_login) {
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    printf("현재 %d원 있습니다.\n", bk_account->balance); // 구조체 포인터
}

void withdraw(B_ACCOUNT *bk_account, int amount) { // 출금 함수
    if (!is_login) {
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    if ((bk_account->balance - amount) < 0) { // 잔액이 충분한지 확인
        printf("잔액이 충분하지 않습니다.\n");
        return; // 부족하면 함수 종료
    }
    bk_account->balance -= amount;
    printf("%d원 인출 하였습니다.\n"
           "잔액 %d원\n",
           amount, bk_account->balance);
}

void deposit(B_ACCOUNT *bk_account, int amount) { // 입금 함수
    if (!is_login) {
        printf("로그인되어있지 않습니다.\n");
        return;
    }
    bk_account->balance += amount;
    printf("%d원 입금 하였습니다.\n"
           "잔액 %d원\n",
           amount, bk_account->balance);
}

int ask_keep_run() { // 다음 거래를 이어갈지 물어보는 함수, true or false 를 반환한다.
    char choose;
    printf("다른 거래를 하시겠습니까? (y/N) >> ");
    scanf("%c", &choose);
    if (choose == 'y' || choose == 'Y') {
        return true;
    } else {
        return false;
    }
}

int main() {
    B_ACCOUNT List = {"김철수", 1234, 10000}; // 은행 계좌 정보
    int start_loop = true; // switch에서 goto 문으로 무한반복을 빠져나가는 방법도 있었지만,
    while (start_loop) {  // true false를 이용해서 반복문을 제어하였다.
        print_main_page(&List);
        int choose = get_menu_num();
        switch (choose) {
            case 1: // 잔액 확인
                check_balance(&List);
                start_loop = ask_keep_run(); // ask_keep_run 은 true or false 를 반환
                break;
            case 2: // 출금
                printf("얼마를 인출하시겠습니까? >> ");
                int withdraw_money;
                scanf("%d", &withdraw_money);
                getchar();
                withdraw(&List, withdraw_money);
                start_loop = ask_keep_run();
                break;
            case 3: // 입금
                printf("얼마를 입금하시겠습니까? >> ");
                int deposit_money;
                scanf("%d", &deposit_money);
                getchar();
                deposit(&List, deposit_money);
                start_loop = ask_keep_run();
                break;
            case 4: // 종료
                start_loop = false;
                break;
            default: // switch 의 default, 범위 밖은 get_menu_num() 함수에서 거르지만 default 도 필수라 넣었다.
                printf("메뉴에서 선택해 주세요..\n");
        }
    }
    return 0;
}