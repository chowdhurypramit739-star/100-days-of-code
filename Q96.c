#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if (str[i] == '\n')
            {
                str[i] = '\0';
                break;
            }

            if (str[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}