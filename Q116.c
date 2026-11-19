#include <stdio.h>

int main()
{
    int nums[100], n, target, i, j;
    int index1 = -1, index2 = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                index1 = i;
                index2 = j;
                break;
            }
        }

        if (index1 != -1)
        {
            break;
        }
    }

    printf("%d %d\n", index1, index2);

    return 0;
}