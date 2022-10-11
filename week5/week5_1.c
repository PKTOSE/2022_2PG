//
// Created by Arkitio on 2022-09-29.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    char user_input;
    while (1) {
        printf("소문자를 입력하세요 (q로 종료)>>");
        scanf("%c", &user_input);
        getchar();
//        user_input = getchar();
        if (tolower(user_input) == 'q') {
            break;
        }

        if (isupper(user_input)) {
            printf("소문자를 입력해야 합니다.\n");
            continue;
        }

        printf("변환>> %c\n", toupper(user_input));
    }
    return 0;
}
