//
// Created by Arkitio on 2022-11-22.
//
#include "stdio.h"
#include "string.h"
#define ENTRIES 5


int main() {
    char *dict[ENTRIES][2] = {
            {"book", "책"},
            {"boy", "소년"},
            {"computer", "컴퓨터"},
            {"language", "언어"},
            {"rain", "비"}};
    char userWord[30];
    printf("단어를 입력하세요>> ");
    scanf("%s", userWord);
    for (int i = 0; i < ENTRIES; i++) {
        if ((strcmp(userWord, dict[i][0])) == 0){
            printf("%s : %s\n", userWord, dict[i][1]);
            break;
        }
    }
    printf("발견되지 않았습니다.\n");
    return 0;
}