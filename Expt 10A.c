#include <stdio.h>

/*
 * name:zakie
 * uin:251C027
 * branch: CIVIL
 */

int main() {
    int a, b, sum;
    int *p1, *p2;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("Sum = %d\n", sum);
    return 0;
}
