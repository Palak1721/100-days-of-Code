//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>b)
    printf("Largest is %d",a);
    else if(b>a&&b>c)
    printf("Largest is %d",b);
    else if(c>a&&c>b)
    printf("Largest is %d",c);
    else if(a==b && b==c)
    printf("All numbers are same");
    else if(a==b||b==c||c==a)
    printf("2numbers are same");
    return 0;
}