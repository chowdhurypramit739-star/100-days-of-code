#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, last = '\n';

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        last = ch;

        if (ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }

        if (ch == '\n')
        {
            lines++;
        }
    }

    if (characters > 0 && last != '\n')
    {
        lines++;
    }

    fclose(fp);

    printf("Total Characters = %d\n", characters);
    printf("Total Words = %d\n", words);
    printf("Total Lines = %d\n", lines);

    return 0;
}