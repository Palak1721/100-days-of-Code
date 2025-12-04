// Q61: Search for an element in an array using linear search.



#include <stdio.h>

int main()
{
    int n, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("Number found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Number not found.\n");

    return 0;
}