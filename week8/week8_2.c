//
// Created by Arkitio on 2022-10-18.
//
#include "stdio.h"
void askBiman();

int main() {
    askBiman();
    return 0;
}

void askBiman() {
    double height, weight, bmi;
    printf("신장을 입력해 주세요 (단위: cm)>> ");
    scanf("%lf", &height);
    printf("체중을 입력해 주세요 (단위: kg)>> ");
    scanf("%lf", &weight);
    height /= 0.01;
    bmi = weight / (height * height);

    if (bmi >= 30) {
        printf("고도비만\n");
    } else if (bmi >= 25) {
        printf("경도비만\n");
    } else if (bmi >= 23) {
        printf("과체중\n");
    } else if (bmi >= 18.5) {
        printf("정상체중\n");
    } else {
        printf("저체중\n");
    }
}