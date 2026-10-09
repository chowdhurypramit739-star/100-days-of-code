#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1)
    {
        printf("The strings are Anagrams.\n");
    }
    else
    {
        printf("The strings are not Anagrams.\n");
    }

    return 0;
}