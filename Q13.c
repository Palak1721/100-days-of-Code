//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap Year");
        return 0;
    }
    else if (year%100==0)
    {
        printf("Not a leap year");
        return 0;
    }
    else if(year%4==0)
    {
        printf("Leap Year");
        return 0;
    }
    else
    printf("Not a leap year");
    
    return 0;
}