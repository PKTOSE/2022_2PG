//
// Created by Arkitio on 2022-10-11.
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#include "conio.h"

void go_random();

int main() {
    go_random();
    return 0;
}

void print_car(int arr[], int length) {
    printf("--------------------\n");
    for (int z = 0; z < length; z++) {
        printf("CAR#%d:", z + 1);
        for (int i = 0; i < arr[z]; i++) {
            printf("*");
        }
        printf("\n");
    }
    printf("--------------------\n");
    Sleep(1000);
}

void go_random() {
    srand(time(NULL));
    int len = 3;
    int array[len];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < len; j++) {
            array[j] += rand() % 3;
        }
        print_car(array, len);
        for (int j = 0; j < len; j++) {
            if (array[j] > 10) {
                printf("\nCar#%d wins!!", j+1);
                Sleep(1000);
                _getch();
                return;
            }
        }
        system("cls");
    }
    Sleep(10000);
}