//
// Created by Arkitio on 2022-11-24.
//
#include "stdio.h"

typedef struct Book {
    int id;
    char title[50];
    char author[50];
} Book;

int main() {
    Book book1 = {1, "바람과 함께 사라지다", "마가렛 미첼"};
    printf("ID : %d\n제목: %s\n저자: %s\n", book1.id, book1.title, book1.author);
    return 0;
}