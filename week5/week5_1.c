//
// Created by Arkitio on 2022-09-29.
//
#include <ctype.h>
#include <stdio.h>

int main() {
    char user_input;
    while (1) {
        printf("�ҹ��ڸ� �Է��ϼ��� (q�� ����)>>");
        scanf("%c", &user_input);
        getchar();
//        user_input = getchar();
        if (tolower(user_input) == 'q') {
            break;
        }

        if (isupper(user_input)) {
            printf("�ҹ��ڸ� �Է��ؾ� �մϴ�.\n");
            continue;
        }

        printf("��ȯ>> %c\n", toupper(user_input));
    }
    return 0;
}
