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
    printf("������ �Է��� �ּ��� (����: cm)>> ");
    scanf("%lf", &height);
    printf("ü���� �Է��� �ּ��� (����: kg)>> ");
    scanf("%lf", &weight);
    height /= 0.01;
    bmi = weight / (height * height);

    if (bmi >= 30) {
        printf("����\n");
    } else if (bmi >= 25) {
        printf("�浵��\n");
    } else if (bmi >= 23) {
        printf("��ü��\n");
    } else if (bmi >= 18.5) {
        printf("����ü��\n");
    } else {
        printf("��ü��\n");
    }
}