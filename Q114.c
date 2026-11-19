#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n, i, j, k;
    int count, maxLength = 0, found;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = i; j < n; j++)
        {
            found = 0;

            for (k = i; k < j; k++)
            {
                if (s[j] == s[k])
                {
                    found = 1;
                    break;
                }
            }

            if (found == 1)
            {
                break;
            }

            count++;

            if (count > maxLength)
            {
                maxLength = count;
            }
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}