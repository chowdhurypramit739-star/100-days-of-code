#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, total, missing;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing Number = %d\n", missing);

    return 0;
}