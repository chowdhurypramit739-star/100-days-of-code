#include <stdio.h>

int main()
{
    char str[200], longest[200];
    int i = 0, j, start = 0;
    int length = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' ||
            str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            length = 0;
            start = i + 1;
        }
        else
        {
            length++;
        }

        i++;
    }

    if (maxLength > 0)
    {
        printf("Longest word = %s\n", longest);
        printf("Length = %d\n", maxLength);
    }
    else
    {
        printf("No words found.\n");
    }

    return 0;
}