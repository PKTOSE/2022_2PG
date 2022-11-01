//
// Created by Arkitio on 2022-11-01.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void minimum(int prices[], int length){
    int tmp = 0;
    for (int i = 0; i<length; i++){
        if (prices[i] >= prices[i+1]){
            tmp = prices[i];
            prices[i] = prices[i+1];
            prices[i+1] = tmp;
            i = 0;
        }
    }
    printf("\nMinimum: %d", prices[0]);
}

int main(){
    srand((unsigned) time(NULL));
    int prices[20] = {0};
    for (int i = 0; i<20; i++){
        prices[i] = rand()%1000;
        printf("%d ", prices[i]);
    }
    int min = prices[0];
    for (int i=0; i<20; i++){
        if (min >= prices[i]){
            min = prices[i];
        }
    }
    printf("\nMin: %d", min);
    minimum(prices, 20);
    return 0;
}