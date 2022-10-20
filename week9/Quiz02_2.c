//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"
#define FULL_HRS 40
#define PAY_PER_HR 9620

double salary(double);

int main() {
    double hrs;
    printf("일주일동안 일한 시간을 입력하시오.");
    scanf("%lf", &hrs);
    printf("직원의 주급은 %lf", salary(hrs));
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
