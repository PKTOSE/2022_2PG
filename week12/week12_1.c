//
// Created by Arkitio on 2022-11-22.
//
#include "stdio.h"
#include "stdlib.h"

int main(){
    char str[100] = "3.14159298";
    float str1, str2;
    str1 = atof(str);
    sscanf(str, "%f", &str2);
    return 0;
}