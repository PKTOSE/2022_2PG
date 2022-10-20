//
// Created by Arkitio on 2022-10-18.
//
#include "stdio.h"
#include "math.h"

double treeHeight(double, double, double);
double toRadians(double);

int main() {
    double height, distance, tree_height, degrees, radians;

    printf("�������� ����(������ ����): ");
    scanf("%lf", &distance);
    printf("�������� Ű(������ ����): ");
    scanf("%lf", &height);
    printf("����(������ ��): ");
    scanf("%lf", &degrees);

    radians = toRadians(degrees);
    tree_height = treeHeight(distance=distance, height=height, radians=radians);

    printf("������ ����(������ ����): %lf \n", tree_height);
    return 0;
}

double treeHeight(double distance, double height, double radians){
    return tan(radians) * distance + height;
}

double toRadians(double degrees){
    return degrees * (M_PI) / 180.0;
}
