//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.



#include <stdio.h>

int main(){
int a,b;
printf("Enter length:%d");
scanf("%d",&a);
printf("Enter breadth:%d");
scanf("%d",&b);

printf("The area of the rectangle with length %d and breadth %d is:%d \n",a,b, a*b);
printf("The perimeter is :%d", (2*a)+(2*b));
    
     return 0;
}