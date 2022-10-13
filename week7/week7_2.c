//
// Created by Arkitio on 2022-10-13.
//
#include "conio.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
    double tree_height = 0, person = 0, distance = 0, degree = 0;
    printf("나무와의 거리, 측정자의 키, 각도>> ");
    scanf("%lf %lf %lf", &distance, &person, &degree);
    double radian = degree * M_PI / 180;
    tree_height = person + tan(radian) * distance;
    printf("\n나무의 키: %lf", tree_height);

    return 0;
}