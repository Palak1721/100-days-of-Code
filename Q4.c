//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main(){

 float radius;
 printf("Enter the radius:%f");
 scanf("%f",&radius);
 printf("The area of the circle with radius %f is %f\n",radius,3.14*radius*radius);
 printf(" And the circumference is %f",2*3.14*radius);
    
     return 0;
}