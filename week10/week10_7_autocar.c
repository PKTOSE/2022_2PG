//
// Created by Arkitio on 2022-11-10.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

// 0 ~ 99 까지의 난수(실수)를 만들어 크기가 3인 배열에 저장
void getSensorData(double *p) {
    srand((unsigned) time(NULL));
    double max = 32767;
    for (int i = 0; i < 3; i++) {
        p[i] = (rand() / max) * 100.0;
    }
}
void convert(double *grades, double* scores, int size);
#define SIZE 10
int main() {
    double sensorData[3] = {0};
    getSensorData(sensorData);
    printf("왼쪽 센서와 거리: %.2lf\n", sensorData[0]);
    printf("가운데 센서와 거리: %.2lf\n", sensorData[1]);
    printf("오른쪽 센서와 거리: %.2lf\n", sensorData[2]);
    return 0;
}