#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    // Find the starting position of surname
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            last = i + 1;
        }
    }

    // Print initials
    if (last > 0)
    {
        printf("%c.", name[0]);

        for (i = 1; i < last; i++)
        {
            if (name[i - 1] == ' ' && name[i] != ' ')
            {
                if (i != last)
                    printf("%c.", name[i]);
            }
        }

        printf(" %s\n", name + last);
    }
    else
    {
        printf("%s\n", name);
    }

    return 0;
}