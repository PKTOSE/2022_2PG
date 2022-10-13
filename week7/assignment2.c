//
// Created by Arkitio on 2022-10-13.
//
#include "stdio.h"

int calc(); // 함수 프로토 타입

int main() { // 프로그램을 계속 실행할 메인 함수, 여기서 무한 반복을 실행
    int keep = 1; // 기본 값은 프로그램 실행 하도록 함
    while (keep) {
        keep = calc(); // calc()함수는 0(중지) 또는 1(한번 더) 반환 -> 무한 반복 조건 업데이트
    }
    return 0;
}

void displayMenu() { // 메뉴 출력 하는 함수, -1의 메뉴를 추가
    printf("==========Menu==========\n"
           "1. Add\n"
           "2. Abstract\n"
           "3. Multiply\n"
           "4. Division\n"
           "(-1 for exit)\n"
           "========================\n");
}

/* add, subtract, multi, divide 함수 들은 두 실수를 받아 각 연산을 하여 반환 */
float add(float n1, float n2) {
    return n1 + n2;
}
float subtract(float n1, float n2) {
    return n1 - n2;
}
float multi(float n1, float n2) {
    return n1 * n2;
}
float divide(float n1, float n2) {
    return n1 / n2;
}

int calc() { // 계산기 함수
    int choice = -1; // 사용자가 메뉴를 보고 선택할 변수, 기본값 -1로 종료됨..
    displayMenu();
    printf("Choose One>> ");
    scanf("%d", &choice);
    getchar();
    if (choice != -1) { // 사용자가 -1이 아닌 수를 입력했을 때
        float n1, n2;
        printf("계산을 할 두 수를 입력하세요>> ");
        scanf("%f %f", &n1, &n2);
        getchar();
        switch (choice) { // 스위치 문으로 각 연산을 수행 및 출력
            case 1:
                printf("%f + %f = %f\n",n1, n2, add(n1, n2));
                break;
            case 2:
                printf("%f - %f = %f\n",n1, n2, subtract(n1, n2));
                break;
            case 3:
                printf("%f * %f = %f\n",n1, n2, multi(n1, n2));
                break;
            case 4:
                printf("%f / %f = %f\n",n1, n2, divide(n1, n1));
                break;
            default:
                /*  숫자를 입력 했지만, 메뉴에 없는 수를 입력 했을 경우 calc()를 다시 실행
                 * 재귀로 호출할 수 있지만, 1을 리턴하여 main에서 다시 실행 하도록 함
                */
                printf("제대로 입력해주세요...\n");
                return 1; // 다시 실행
        }
        return 1;
    } else {
        return 0; // 프로그램 종료
    }
}