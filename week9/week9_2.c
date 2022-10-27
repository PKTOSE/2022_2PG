//
// Created by Arkitio on 2022-10-27.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define STUDENTS 10


int main() {
    srand((unsigned) time(NULL));
    int scores[STUDENTS] = {0};
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < STUDENTS; i++) {
        scores[i] = rand() % 101;
        printf("Student %d's score = %d\n", i + 1, scores[i]);
        sum += scores[i];
    }
    avg = sum / STUDENTS;
    printf("Class average is %d.", avg);
    return 0;
}