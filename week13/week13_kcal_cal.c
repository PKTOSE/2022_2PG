//
// Created by Arkitio on 2022-11-24.
//
#include "stdio.h"
#define SIZE 3

typedef struct Food {
    char name[100];
    int calories;
} Food;

int calc_total_calories(Food arr[], int size);

int main() {
    Food today_food_total[SIZE] = {{"hamburger", 900}, {"bulgogi", 500}, {"sushi", 400}};
    double cal_kcal = calc_total_calories(today_food_total, SIZE);
    printf("%.2lf", cal_kcal);
    return 0;
}

int calc_total_calories(Food arr[], int size){
    int total_cal = 0;
    for (int i=0; i<size; i++){
        total_cal += arr[i].calories;
    }
    return total_cal;
}