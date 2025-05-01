//lucas series
#include<stdio.h>

int main()
{
    int i, numTerms;
    printf("Enter the number of terms in Lucas series = ");
    scanf("%d", &numTerms);

    int first = 2, second = 1;

    printf("Lucas series up to %d terms:\n", numTerms);

    if (numTerms >= 1)
        printf("%d ", first);
    if (numTerms >= 2)
        printf("%d ", second);

    for (i = 3; i <= numTerms; i++)
    {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
