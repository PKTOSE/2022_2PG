//
// Created by Arkitio on 2022-11-08.
//
#include "stdio.h"
#define type_name(expr) \
    (_Generic((expr), \
              char: "char", unsigned char: "unsigned char", signed char: "signed char", \
              short: "short", unsigned short: "unsigned short", \
              int: "int", unsigned int: "unsigned int", \
              long: "long", unsigned long: "unsigned long", \
              long long: "long long", unsigned long long: "unsigned long long", \
              float: "float", \
              double: "double", \
              long double: "long double", \
              void*: "void*", \
              default: "?"))
int main(){
    /*
     * 포인터 = 리스트 < 리스트가 포인터에 속한다 볼 수 있음
     */
    int li[3] = {1, 2, 3};
    int *lin = li;
    printf("%d\n", *(li));
    printf("%d\n", *(li+1));
    printf("%d\n", *(lin+2));
    int *p = NULL;
    *p = 100;
    printf("%s", type_name(NULL));
    return 0;
}