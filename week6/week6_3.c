//
// Created by Arkitio on 2022-10-11.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void MakeRandint();
void Coin(int);

int main(){
//    MakeRandint();
    Coin(100000000);
    return 0;
}

void IterArray(int arr[], int len){
    for (int i = 0; i<len; i++){
        printf("%d\n", arr[i]);
    }
}

void MakeRandint(){
    srand((unsigned int) time(NULL));
    int arr[6] = {0};
    for (int i = 0; i<6; i++){
        arr[i] = rand()%45 + 1;
    }
    IterArray(arr, 6);
}

void Coin(int tries){
    srand((unsigned int) time(NULL));
    int cntUP = 0, cntDOWN = 0;
    for (int i = 0; i<tries; i++){
        if (rand()%2 == 0){
            cntUP++;
        }else{
            cntDOWN++;
        }
    }
    printf("%d번 시도중 %d번 앞면, %d번 뒷면이 나왔습니다.\n"
           "앞면이 나올 확률 : %.2f%%", tries, cntUP, cntDOWN, ((float) cntUP/tries)*100);
}