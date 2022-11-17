//
// Created by Arkitio on 2022-11-17.
//
#include "stdio.h"
#include "string.h"
#define SIZE 100

void count_str(char *, char);

int main() {
    char str[SIZE];
    char ch;
    printf("문자열을 입력하세요: ");
    gets(str);
    printf("개수를 셀 문자를 입력하세요: ");
    ch = getchar();
    count_str(str, ch);

    char txt[SIZE];
    char new[SIZE] = "";
    strcpy(txt, "A Clion Project");
    char sep[] = " ";
    char *token;
    token = strtok(txt, sep);
    while (token != NULL){
        strcat(new, token);
        token = strtok(NULL, sep);
    }
    printf("\n%s", new);
}

void count_str(char *str, char target) {
    int length = strlen(str);
    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == target){
            cnt++;
        }
    }
    printf("Count %c in %s : %d", target, str, cnt);
}