//
// Created by Arkitio on 2022-10-25.
//
#include "math.h"
#include "stdio.h"

int palindrome(int);// 함수의 프로토 타입

int main() {
    int user_input = 0;
    printf("4개의 digit number를 입력 : ");
    scanf("%d", &user_input);
    getchar();
    printf("Reverse number는 %d\n", palindrome(user_input));
    return 0;
}

int palindrome(int n) {
    int cnt = 0;
    int nforcnt = n;// n이 몇자리 수인지 확인
    while (nforcnt > 0) {
        nforcnt /= 10;
        cnt++;
    }
    int result = 0, tmp = 0, div = 10;
    int muilti = pow(10, cnt - 1);// n의 자릿수에 따라 달라짐
    while (n > 0) {               // 리버스 수행
        tmp = n % div;
        result += tmp * muilti;// 출력할 변수에 대입
        n /= div;
        muilti /= 10;
    }
    return result;
}

/*
 * 12
 * 12 % 10 = 2 = tmp
 * 12 / 10 = 1
 *
 * 1 % 10 = 1 = tmp
 * 1 / 10 = 0
 */