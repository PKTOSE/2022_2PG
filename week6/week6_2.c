//
// Created by Arkitio on 2022-10-11.
//
#include "stdio.h"

int max(int, int);
int fact(int);

int main() {
    int x, y, _max;
    printf("Input two numbers(e.g. 1 2) >> ");
    scanf("%d %d", &x, &y);
    _max = max(x, y);
    printf("%d", fact(5));
    return 0;
}

int max(int x, int y) {
    if (x >= y) {
        printf("%d is bigger than %d.", x, y);
        return x;
    } else {
        printf("%d is bigger than %d.", y, x);
        return y;
    }
}

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}