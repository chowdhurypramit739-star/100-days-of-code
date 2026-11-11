#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (n <= 0 || n > 100 || k <= 0 || k > n)
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Maximum elements: ");

    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}