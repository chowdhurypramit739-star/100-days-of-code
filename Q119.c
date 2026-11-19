#include <stdio.h>

int main()
{
    int arr[100], count[1000] = {0};
    int n, i, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;

        if (count[arr[i]] > 1)
        {
            repeated = arr[i];
            break;
        }
    }

    printf("Repeated Element = %d\n", repeated);

    return 0;
}