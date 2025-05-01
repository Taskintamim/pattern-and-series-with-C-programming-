#include<stdio.h>

int main()
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%d", &n);

    // Upper half
    for(row = 1; row <= n; row++)
    {
        // Print spaces
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // Ascending numbers
        for(col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        // Descending numbers
        for(col = row - 1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // Lower half
    for(row = n - 1; row >= 1; row--)
    {
        // Print spaces
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // Ascending numbers
        for(col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        // Descending numbers
        for(col = row - 1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}
