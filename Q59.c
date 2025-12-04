// Q59: Count even and odd numbers in an array.



#include<stdio.h>

int main() {

    int n;
    int even_count=0;
    int odd_count=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int array[n];

    printf("Enter the elements: ");
    

    for (int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (array[i]%2==0)
        {
            even_count++;
        }

        else 
        {
            odd_count++;
        }
    }

    printf("Number of edd numbers: %d\n", odd_count);
    printf("Number of even elements: %d", even_count);
    return 0;
}