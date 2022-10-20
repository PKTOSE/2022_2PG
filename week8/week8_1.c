//
// Created by Arkitio on 2022-10-18.
//
#include "stdio.h"
#include "math.h"

double treeHeight(double, double, double);
double toRadians(double);

int main() {
    double height, distance, tree_height, degrees, radians;

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);
    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);
    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);

    radians = toRadians(degrees);
    tree_height = treeHeight(distance=distance, height=height, radians=radians);

    printf("나무의 높이(단위는 미터): %lf \n", tree_height);
    return 0;
}

double treeHeight(double distance, double height, double radians){
    return tan(radians) * distance + height;
}

double toRadians(double degrees){
    return degrees * (M_PI) / 180.0;
}
