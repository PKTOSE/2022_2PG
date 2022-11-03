//
// Created by Arkitio on 2022-11-03.
//
#include "stdio.h"
#define YEARS 3
#define PRODUCTS 5

int sum(int scrs[YEARS][PRODUCTS]);
int main() {
    int total;
    int sales[YEARS][PRODUCTS] = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};
    total = sum(sales);
    printf("%d", total);
    return 0;
}

int sum(int scrs[YEARS][PRODUCTS]) {
    int sums = 0;
    for (int i = 0; i < YEARS; i++) {
        for (int j = 0; j < PRODUCTS; j++) {
            sums += scrs[i][j];
        }
    }
    return sums;
}
