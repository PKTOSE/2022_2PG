//
// Created by Arkitio on 2022-10-27.
//

// 주사위 던지기

#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main(){
    int times[6] = {0};
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10000; i++){
        ++times[rand()%6];
    }
    printf("====================\n면\t빈도\n====================\n");
    for (int i = 0; i<6; i++){
        printf("%d\t%d\n",i+1,times[i]);
    }
    printf("====================\n");
    return 0;
}

