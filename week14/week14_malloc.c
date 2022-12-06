//
// Created by Arkitio on 2022-12-06.
//
#include "stdio.h"
#include "stdlib.h"

int main(){
    int *list;
    list = (int *) malloc(100 * sizeof (int));
    if (list == NULL){
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    free(list);
    return 0;
}