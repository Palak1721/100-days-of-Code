//Q6: Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main() {
    int a, b, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    x = a;
    a = b;
    b = x;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}