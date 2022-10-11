#include <stdio.h>


int main() {
    int x, y;
    char op;
    printf("e.g. 2 + 5\nInput >> ");
    scanf("%d %c %d", &x, &op, &y);

    int result;
    switch (op) {
        case '+':
           result = x+ y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x/y;
            break;
        default:
            result = 0;
            printf("False input\n");
            break;
    }
    printf("%d %c %d = %.2d", x, op, y, result);

    return 0;
}
