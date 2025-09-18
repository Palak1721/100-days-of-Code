//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main(){

float c,f;
printf("Temperature in Celsius is:%f\n");
scanf("%f",&c);
f=(c*9.0/5.0)+32.0;
printf("The temperature in Farenheit is :%f\n",f);    
    
     return 0;
}