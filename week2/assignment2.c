#include <stdio.h>

int main(void) {
    /*
     * 문자를 하나 입력받아서 switch case 문으로 aeiou를 판단
     * break문은 마지막 모음 케이스에서 한번만 사용하여 코드를 작성함
     */
    char c;
    printf("문자를 입력하세요>> ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("모음입니다.");
            break;
        default:
            printf("자음입니다.");
            break;
    }
    return 0;
}