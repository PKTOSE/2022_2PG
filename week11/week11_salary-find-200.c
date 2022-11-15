//
// Created by Arkitio on 2022-11-15.
//
#include <stdio.h>
#define SIZE 10

int *search(int *A, int size, int search_value, int *idx) {
    for (int i = 0; i < size; i++) {
        if (*A == search_value) {
            //            printf("index = %d\n", i);
            idx[i] = 1;
        }
        A++;
    }
    return idx;
}

int main() {
    int monthly_salary[SIZE] = {100, 200, 400, 500, 200, 140, 800, 450, 500, 280};
    int idx_salary_200[SIZE] = {0};
    search(monthly_salary, SIZE, 200, idx_salary_200);
    for (int i = 0; i < SIZE; i++) {
        if (idx_salary_200[i] == 1) {
            printf("index %d is 200\n", i);
        }
    }
    return 0;
}