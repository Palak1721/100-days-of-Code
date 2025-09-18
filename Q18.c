//Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main(){
    float marks;
    printf("Enetr marks ");
    scanf("%f",&marks);

        if(marks>=90)
        printf("Grade A");
        else if(marks>=80&&marks<90)
        printf("Grade B");
         else if(marks>=70&&marks<80)
        printf("Grade c");
         else if(marks>=60&&marks<70)
        printf("Grade D");
        else 
        printf("Grade F");


    return 0;
}