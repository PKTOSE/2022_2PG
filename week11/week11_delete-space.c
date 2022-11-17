//
// Created by Arkitio on 2022-11-15.
//
#include "stdio.h"
#include "string.h"
#define SIZE 100

void *delspace(char *);

int main(){
    char str[SIZE];
    printf("공백이 있는 문자열을 입력하세요>> ");
//    gets_s(str, SIZE);
    scanf("%s", str);
    delspace(str);

    return 0;
}

void *delspace(char *str){
    // strtok를 이용하여 공백으로 토큰 분리 후 새 문자열에 strcat으로 붙이기
    char seps[] = " ";
    char *token;
    char new_str[SIZE];
    token = strtok(str, seps);
    while (token != NULL){
        strcat(new_str, token);
        token = strtok(NULL, seps);
    }
    printf("%s", new_str);
    return NULL;
}