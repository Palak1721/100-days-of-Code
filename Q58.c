// Q58: Find the maximum and minimum element in an array.


#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int maximum = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    int minimum = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d\n", minimum);

    return 0;
}