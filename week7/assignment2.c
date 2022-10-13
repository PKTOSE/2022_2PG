//
// Created by Arkitio on 2022-10-13.
//
#include "stdio.h"

int calc(); // �Լ� ������ Ÿ��

int main() { // ���α׷��� ��� ������ ���� �Լ�, ���⼭ ���� �ݺ��� ����
    int keep = 1; // �⺻ ���� ���α׷� ���� �ϵ��� ��
    while (keep) {
        keep = calc(); // calc()�Լ��� 0(����) �Ǵ� 1(�ѹ� ��) ��ȯ -> ���� �ݺ� ���� ������Ʈ
    }
    return 0;
}

void displayMenu() { // �޴� ��� �ϴ� �Լ�, -1�� �޴��� �߰�
    printf("==========Menu==========\n"
           "1. Add\n"
           "2. Abstract\n"
           "3. Multiply\n"
           "4. Division\n"
           "(-1 for exit)\n"
           "========================\n");
}

/* add, subtract, multi, divide �Լ� ���� �� �Ǽ��� �޾� �� ������ �Ͽ� ��ȯ */
float add(float n1, float n2) {
    return n1 + n2;
}
float subtract(float n1, float n2) {
    return n1 - n2;
}
float multi(float n1, float n2) {
    return n1 * n2;
}
float divide(float n1, float n2) {
    return n1 / n2;
}

int calc() { // ���� �Լ�
    int choice = -1; // ����ڰ� �޴��� ���� ������ ����, �⺻�� -1�� �����..
    displayMenu();
    printf("Choose One>> ");
    scanf("%d", &choice);
    getchar();
    if (choice != -1) { // ����ڰ� -1�� �ƴ� ���� �Է����� ��
        float n1, n2;
        printf("����� �� �� ���� �Է��ϼ���>> ");
        scanf("%f %f", &n1, &n2);
        getchar();
        switch (choice) { // ����ġ ������ �� ������ ���� �� ���
            case 1:
                printf("%f + %f = %f\n",n1, n2, add(n1, n2));
                break;
            case 2:
                printf("%f - %f = %f\n",n1, n2, subtract(n1, n2));
                break;
            case 3:
                printf("%f * %f = %f\n",n1, n2, multi(n1, n2));
                break;
            case 4:
                printf("%f / %f = %f\n",n1, n2, divide(n1, n1));
                break;
            default:
                /*  ���ڸ� �Է� ������, �޴��� ���� ���� �Է� ���� ��� calc()�� �ٽ� ����
                 * ��ͷ� ȣ���� �� ������, 1�� �����Ͽ� main���� �ٽ� ���� �ϵ��� ��
                */
                printf("����� �Է����ּ���...\n");
                return 1; // �ٽ� ����
        }
        return 1;
    } else {
        return 0; // ���α׷� ����
    }
}