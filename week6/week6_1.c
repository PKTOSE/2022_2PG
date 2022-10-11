//
// Created by Arkitio on 2022-10-06.
//
#include "stdio.h"

int han(int);
int main() {
    int check;
    int cnt = 0;
    scanf("%d", check);
    for (int i = 1; i <= check; i++) {
        if (han(check)) {
            cnt++;
        }
    }
    printf("%d", cnt);
}

int sequence(int arr[], int length) {
    int len = length, i = 0;
    for (length; length >= 0; length--) {
        if (length == len) {
            continue;
        }
        if ((arr[i - 1] - arr[i] == arr[i] - arr[i + 1]) != 1) {
            return 0;
        }
        i++;
    }
    return 1;
}

int han(int n) {
    int i = 0;
    int arr[n];
    while (n > 0) {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    if (sequence(arr, n)) {
        return 1;
    } else {
        return 0;
    }
}
