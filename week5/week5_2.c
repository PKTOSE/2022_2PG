//
// Created by Arkitio on 2022-10-04.
//
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

//int printStar(int n, int i, int j);
//int drawTree(int n);
//
//int main(void) {
//    printStar(8, 1, 1);
//    return 0;
//}
//
//int printStar(int n, int i, int j) {
//    if (n == 0) return drawTree(j);
//    if (i == 1) j = n;
//    for (int k = 0; k < n - 1; k++)
//        printf(" ");
//    for (int k = 0; k < i; k++)
//        printf("*");
//    printf("\n");
//    return printStar(n - 1, i + 2, j);
//}
//
//int drawTree(int n) {
//    int howLong = 1 + (2 * n - 1);
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < howLong / 2 - 3; j++)
//            printf(" ");
//        for (int j = 0; j < 5; j++)
//            printf("*");
//        printf("\n");
//    }
//}
