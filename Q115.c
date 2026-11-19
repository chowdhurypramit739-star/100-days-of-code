#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    if (strlen(s) != strlen(t))
    {
        anagram = 0;
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }

    return 0;
}