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
            printf("�õ�Ƚ���� �ʰ��߽��ϴ�. ��� �� �ٽ� �õ����ּ���\n");
        }
        int pwd = 0, input = 1;
        printf("��й�ȣ�� �Է����ּ���>> ");
        scanf("%d", &input);
        getchar();
        if (pwd == input){
            is_login = 1;
            return;
        }else{
            printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
            tries++;
            continue ;
        }
    }
}



int transaction(){
    printf("=========================\n"
           "%5s   %5s   %10s\n"
           "=========================\n", "�Ա�", "���", "�ŷ� �� �ܾ�");
    savings(10000);
    savings(-10000);
    savings(-10000);
    return 0;
}

void savings(long amount){
    static long balance = 0;
    if (amount <=0 && balance == 0){
        printf("���̻� ����� �� �����ϴ�. �ܾ��� Ȯ���� �ֽʽÿ�.\n");
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