// Q55: Write a program to print all the prime numbers from 1 to n., infinite lop..


#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", i);
    }

    return 0;
}