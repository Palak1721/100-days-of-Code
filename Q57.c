// Q57: Find the sum of array elements.


#include<stdio.h>

int main() {

    int n;
    int sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    printf("The sum is %d", sum);
    return 0;
}