//
// Created by Arkitio on 2022-11-15.
//
#include "stdio.h"
#define SIZE 100

int main(){
    char str[SIZE];
    printf("공백이 있는 문자열을 입력하세요>> ");
    gets_s(str, SIZE);
    return 0;
}

void *delspace(char *str){
    // strtok를 이용하여 공백으로 토큰 분리 후 새 문자열에 strcat으로 붙이기
}