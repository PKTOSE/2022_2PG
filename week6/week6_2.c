//
// Created by Arkitio on 2022-10-11.
//
# include "stdio.h"

int max(int, int);

int main(){
    int x, y, _max;
    printf("Input two numbers(e.g. 1 2) >> ");
    scanf("%d %d", &x, &y);
    _max = max(x, y);
    return 0;
}

int max(int x, int y){
    if (x >= y){
        printf("%d is bigger than %d.", x, y);
        return x;
    }else{
        printf("%d is bigger than %d.", y, x);
        return y;
    }
}