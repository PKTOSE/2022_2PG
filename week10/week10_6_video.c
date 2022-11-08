//
// Created by Arkitio on 2022-11-08.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    srand((unsigned) time(NULL));
    int video[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            video[i][j] = rand() % 256;
            printf("%3d ", video[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int *p = video;
    for(int i = 0;i<25;i++){
        *p += 10;
        printf("%3d ", *p);
        p++;
        if(i%5 == 4){
            printf("\n");
        }
    }
    return 0;
}