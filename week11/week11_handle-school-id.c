//
// Created by Arkitio on 2022-11-15.
//
#include "stdio.h"
#include "conio.h"

int main(){
    char name[100];
    char ids[100];
    printf("이름과 학번을 입력해주세요>> ");
    scanf("%s %s", name, ids);
    puts(name);
    puts(ids);
    _getch();
    return 0;
}