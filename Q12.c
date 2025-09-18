//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


#include <stdio.h>

int main(){
    int a;
    printf("Enter a no to check if its positive ,negative or zero");
    scanf("%d",&a);
    if(a==0)
    printf("Zero");

    else if(a>0)
    printf("Positive");

    else
    printf("Negative");


    return 0;
}