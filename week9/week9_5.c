//
// Created by Arkitio on 2022-11-01.
//
#include "stdio.h"

void print_seats(int seats[], int length);
int make_reservation(int seats[], int lenght);

int main() {
    int seats[30] = {0};
    print_seats(seats, 30);
    make_reservation(seats, 30);
    return 0;
}

int make_reservation(int seats[], int length){
    int answer[2] = {0};
    printf("몇번째 좌석을 예약하시겠습니까? ");
    scanf("%d %d", &answer[0], &answer[1]);
    for (int i = 0; i < 2; i++) {
        answer[i] -= 1;
    }
    if (seats[answer[0]] == 1 && seats[answer[1]]) {
        printf("이미 예약된 좌석입니다.\n");
    } else {
        seats[answer[0]] = 1;
        seats[answer[1]] = 1;
        printf("예약에 성공하였습니다.\n");
    }
    print_seats(seats, length);
}

void print_seats(int seats[], int length) {
    int cnt = 0;
    char line[3] = {'A', 'B', 'C'};
    for (int i = 0; i < length; i++) {
        if (i == 0) {
            printf("  ==SCREEN==\n");
            printf("%c ", line[cnt]);
            cnt++;
        }
        printf("%d", seats[i]);
        if (i % 10 == 9) {
            printf("\n%c ", line[cnt]);
            cnt++;
        }
    }
    printf("\n");
}
