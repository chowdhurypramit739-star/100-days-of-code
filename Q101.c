#include <stdio.h>

int main()
{
    int nums[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("First occurrence index = %d\n", first);
    printf("Last occurrence index = %d\n", last);

    return 0;
}