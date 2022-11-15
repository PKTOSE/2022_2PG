//
// Created by Arkitio on 2022-11-15.
//
#include "stdio.h"

int main(){
    char name[100];
    char address[100];
    gets_s(name, 100);
    gets_s(address, 100);
    puts(name);
    puts(address);
    return 0;
}