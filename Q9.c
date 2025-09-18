//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

float si(float p, float r, float t) {
    return (p * r * t) / 100.0;
}

float ci(float p, float r,float t) {
    float amt = p * pow(1 + r / 100.0, t);
    return amt - p;
}

int main() {
    float p, r, t;
    printf("Enter Principal, Rate of Interest and Time: ");
    scanf("%f %f %f", &p, &r, &t);
    float s = si(p, r, t);
    float c = ci(p, r, t);
    printf("Simple Interest = %.3f\n", s);
    printf("Compound Interest = %.3f\n", c);
    return 0;
}