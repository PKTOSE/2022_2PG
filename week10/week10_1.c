//
// Created by Arkitio on 2022-11-03.
//
#include "stdio.h"
#define SIZE 16

int binary_search(const int list[], int, int);

int main() {
    int list[SIZE] = {3, 5, 6, 2, 9, 6, 8, 7,
                      19, 32, 28, 48, 68, 98, 23, 15};
    printf("%d", binary_search(list, SIZE, 23));
    return 0;
}

int binary_search(const int list[], int size, int key) {
    int low, high, middle, cnt = 0;
    low = 0;
    high = size - 1;
    while (low <= high) {              // 아직 숫자 들이 남아 있으면
        printf("[%d %d]\n", low, high);// 하한과 상한을 출력 한다.
        middle = (low + high) / 2;     // 중간 위치를 계산 한다.
        if (key == list[middle]) {     // 일치 하면 탐색 성공
            cnt++;
            return middle;
        }
        else if (key > list[middle]){// 중간 원소 보다 크다면
            cnt++;
            low = middle + 1;
        }// 새로운 값으로 low 설정
        else{
            cnt++;
            high = middle - 1;// 새로운 값으로 high 설정
        }
    }
    printf("cnt = %d\n", cnt);
    return -1;
}