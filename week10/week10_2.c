//
// Created by Arkitio on 2022-11-03.
//
#include "stdio.h"
#define ROWS 3
#define COLUMNS 5

int main() {
    int a[ROWS][COLUMNS] = {{87, 98, 80, 76, 3},
                            {99, 89, 90, 90, 0},
                            {65, 68, 50, 49, 0}};
    double standard[5] = {0.3, 0.4, 0.2, 0.1, 1.0};
    double score[ROWS] = {0};
    for (int i = 0; i < ROWS; i++) {
        double scr = 0;
        for (int j = 0; j < COLUMNS; j++) {
            if (j == 4) {
                scr -= (double) a[i][j];
                break;
            }
            scr += (double) a[i][j] * standard[j];
        }
        score[i] = scr;
    }
    for (int i = 0; i < ROWS; i++) {
        printf("%d: %.2lf\n", i + 1, score[i]);
    }
    return 0;
}