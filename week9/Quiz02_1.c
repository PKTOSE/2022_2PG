//
// Created by Arkitio on 2022-10-20.
//
#include "stdio.h"

int factorial(int);

int main(){
    printf("%d", factorial(5));
    return 0;
}

int factorial(int  n){
    int j=1;
    for (int i=1; i<=n; i++){
        j *= i;
    }
    return j;
}