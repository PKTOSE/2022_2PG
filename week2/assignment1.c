#include <stdio.h>


int main() {
    /*
     * 3개의 정수를 입력받아 가장 작은 수를 출력하는 프로그램
     * a 부터 b와 c 비교, b와 a,c 비교 >> 가장 작은 수 출력
     */
    int a, b, c;
    printf("3개의 정수를 입력해 주세요>> ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c) {
        printf("가장 작은 정수는 %d입니다.", a);
    } else if (b <= a && b <= c) {
        printf("가장 작은 정수는 %d입니다.", b);
    } else {
        printf("가장 작은 정수는 %d입니다.", c);
    }
    return 0;
}