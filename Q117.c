#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter %d elements in sorted order:\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Sorted Array: ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}