#include<stdio.h>

int main()
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%d", &n);

    // Upper triangle
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower triangle
    for(row = n - 1; row >= 1; row--)
    {
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
