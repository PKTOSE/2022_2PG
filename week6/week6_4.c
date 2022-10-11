//
// Created by Arkitio on 2022-10-11.
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"

void go_random();

int main() {
    go_random();
    return 0;
}

void print_car(int car1, int car2) {
    printf("--------------------\n");
    printf("CAR#1:");
    for (int i = 0; i < car1; i++) {
        printf("*");
    }
    printf("\n");

    printf("CAR#2:");
    for (int i = 0; i < car2; i++) {
        printf("*");
    }
    printf("\n");
    printf("--------------------\n");
    Sleep(1000);
    system("cls");
}

void go_random() {
    srand(time(NULL));
    int a = 0, b = 0;
    for (int i = 0; i < 10; i++) {
        a += rand() % 3;
        b += rand() % 3;
        print_car(a, b);
        if (a > 10 || b > 10) {
            return;
        }
    }
    Sleep(10000);
}