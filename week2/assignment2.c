#include <stdio.h>

int main(void) {
    /*
     * ���ڸ� �ϳ� �Է¹޾Ƽ� switch case ������ aeiou�� �Ǵ�
     * break���� ������ ���� ���̽����� �ѹ��� ����Ͽ� �ڵ带 �ۼ���
     */
    char c;
    printf("���ڸ� �Է��ϼ���>> ");
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("�����Դϴ�.");
            break;
        default:
            printf("�����Դϴ�.");
            break;
    }
    return 0;
}