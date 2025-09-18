// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int n;
    printf("Enter time in second");
    scanf("%d",&n);
    int hr=n/3600;
    n=n%3600;
    int min=n/60;
    n=n%60;

    printf("%02d:%02d:%02d",hr,min,n);
    return 0;
}