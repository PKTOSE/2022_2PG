//
// Created by Arkitio on 2022-12-01.
//
#include <stdio.h>

int main() {
    char *fruits[] = {
            "apple",
            "blueberry",
            "orange",
            "melon"};

    int n = sizeof(fruits) / sizeof(fruits[0]);
    for (int i = 0; i < n; i++) {
        printf("%s\n", fruits[i]);
    }
    return 0;
}
