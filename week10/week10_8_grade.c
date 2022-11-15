//
// Created by Arkitio on 2022-11-10.
//
#include "stdio.h"
#define SIZE 10
// grades includes 10 data
void convert(const double *grades, double *scores, int size) {
    double scr;
    for (int i = 0; i < size; i++) {
        scr = grades[i];
        scr = scr / 4.5 * 100.0;
        scores[i] = scr;
    }
}

int main() {
    double grades[SIZE] = {3.6, 4.1, 2.7, 3.8, 4.4, 2.4, 3.4, 3.6, 1.9, 4.5};
    double scores[SIZE] = {0};
    convert(grades, scores, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("STUDENT%d: %.1lf -> %03.2lf\n", i, grades[i], scores[i]);
    }
    return 0;
}