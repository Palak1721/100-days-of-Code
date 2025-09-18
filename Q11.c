// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a no. to check even or odd");
    scanf("%d",&a);
    if(!(a%2))
    printf("%d is even",a);
    else
    printf("%d is odd",a);


    return 0;
}