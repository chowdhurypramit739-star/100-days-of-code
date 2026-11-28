#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    int a, b, ch;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    choice = ch;

    switch (choice)
    {
        case ADD:
            printf("Sum = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d\n", a * b);
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}