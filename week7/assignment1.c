//
// Created by Arkitio on 2022-10-13.
//
#include "stdio.h"

int sigma_formula2(int); // 함수 프로토 타입

int main() {  // 메인 함수에서 정수를   결과를 출력
    int n= 0;
    printf("양의 정수 하나를 입력 하세요>> ");
    scanf("%d", &n);
    printf("%d", sigma_formula2(n));
    return 0;
}

int sigma_formula2(int n) { // 문제에서 주어진 시그마를 계산하는 함수, 유명한 3개중에 2번째라 2라고 이름 붙임..
    long sum = 0; // 리턴값, 더해야 할 값이라 0으로 초기화
    for (int k = 1; k <= n; k++) {
        sum += k * k;
    }
    return sum;
}