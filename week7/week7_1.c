//
// Created by Arkitio on 2022-10-13.
//
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"

int main() {
    int i, x, y, red, green, blue;
    HDC hdc;
    hdc = GetWindowDC(GetForegroundWindow());
    srand((unsigned int) time(NULL));
    for (i = 0; i < 100; i++) {
        x = rand() % 300;
        y = rand() % 300;

        red = rand() % 256;
        green = rand() % 256;
        blue = rand() % 256;

        SetPixel(hdc, x, y, RGB(red,green,blue));
    }
    _getch();
    return 0;
}