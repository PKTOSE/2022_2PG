//
// Created by Arkitio on 2022-10-13.
//
#include "conio.h"
#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void play_game();

int main() {
    play_game();
    return 0;
}

int head_or_tail() {
    srand((unsigned int) time(NULL));
    int coin = rand() % 2;
    if (coin == 0) {
        return coin;// head > coin = 0
    } else {
        return coin;// tail > coin = 1
    }
}

void play_game() {
    char keep_play = 'y';
    while(keep_play == 'y'){
        int choice = 0, ans;// �⺻ ���� �ո�
        printf("==========���� ������ ����==========\n"
               "�ո� Ȥ�� �޸� --> (�ո�: 0, �޸�: 1) >>");
        scanf("%d", &choice);
        getchar();
        ans = head_or_tail();
        if (choice == ans) {
            printf("�����Դϴ�!\n");
        } else {
            printf("Ʋ�Ƚ��ϴ�..\n");
        }
        printf("=================================\n");
        printf("����ؼ� �õ��Ͻðڽ��ϱ�? (Y or N) >>");
        scanf("%c", &keep_play);
        getchar();
        keep_play = tolower(keep_play);
    }
}