#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceName);

    printf("Enter destination file name: ");
    scanf("%99s", destName);

    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file not found.\n");
        return 1;
    }

    destination = fopen(destName, "w");

    if (destination == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}