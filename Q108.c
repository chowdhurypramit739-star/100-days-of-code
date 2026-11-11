#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        answer[i] = 1;

        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("Answer array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}