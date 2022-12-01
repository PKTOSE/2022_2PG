//
// Created by Arkitio on 2022-12-01.
//
#include <stdio.h>
int main(){
    FILE *fp = NULL;
    fp = fopen("sample.txt", "w");
    if (fp == NULL){
        printf("파일 열기 실패\n");
    }else{
        printf("파일 열기 성공\n");
        fputs("파일 열기 성공!!", fp);
    }
    fclose(fp);
    return 0;
}