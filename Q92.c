#include <stdio.h>

int main()
{
    char str[100];
    int i, count[26] = {0}, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("First repeating alphabet = %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}