//
// Created by Arkitio on 2022-10-13.
//
#include "stdio.h"

int sigma_formula2(int); // �Լ� ������ Ÿ��

int main() {  // ���� �Լ����� ������   ����� ���
    int n= 0;
    printf("���� ���� �ϳ��� �Է� �ϼ���>> ");
    scanf("%d", &n);
    printf("%d", sigma_formula2(n));
    return 0;
}

int sigma_formula2(int n) { // �������� �־��� �ñ׸��� ����ϴ� �Լ�, ������ 3���߿� 2��°�� 2��� �̸� ����..
    long sum = 0; // ���ϰ�, ���ؾ� �� ���̶� 0���� �ʱ�ȭ
    for (int k = 1; k <= n; k++) {
        sum += k * k;
    }
    return sum;
}