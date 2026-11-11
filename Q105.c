#include <stdio.h>

int main()
{
    int nums[100], n, i, j, count;
    int majority = -1, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            majority = nums[i];
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Majority Element = %d\n", majority);
    }
    else
    {
        printf("Majority Element = -1\n");
    }

    return 0;
}