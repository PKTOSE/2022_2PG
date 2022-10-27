//
// Created by Arkitio on 2022-10-27.
//
#include "stdio.h"

int main() {
    int scores[] = {1, 2, 3, 4, 5};
    int size = 0;
    size = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0; i < size; i++) {
        printf("%d ", scores[i]);
    }
    return 0;
}