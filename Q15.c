//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("Upper case");
    else if(ch>=97&&ch<=122)
    printf("Lower case");
    else 
    printf("Special character");
    return 0;
}