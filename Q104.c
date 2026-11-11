#include <stdio.h>

int main()
{
    int n, x, i;
    int leftSum, rightSum, pivot = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        for (i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot Integer = %d\n", pivot);

    return 0;
}