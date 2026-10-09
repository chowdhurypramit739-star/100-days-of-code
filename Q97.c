#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ')
    {
        printf("%c.", name[0]);
    }

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c.", name[i]);
        }
    }

    return 0;
}