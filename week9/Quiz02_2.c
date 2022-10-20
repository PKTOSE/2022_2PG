//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"
#define FULL_HRS 40
#define PAY_PER_HR 9620

double salary(double);

int main() {
    double hrs;
    printf("�����ϵ��� ���� �ð��� �Է��Ͻÿ�.");
    scanf("%lf", &hrs);
    printf("������ �ֱ��� %lf", salary(hrs));
    return 0;
}

double salary(double hrs) {
    if (hrs < FULL_HRS) {
        return hrs * PAY_PER_HR;
    } else if (hrs < FULL_HRS * 2) {
        return hrs * (1.5 * PAY_PER_HR);
    } else {
        return hrs * (2 * PAY_PER_HR);
    }
}
