#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    int choice;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! Full Access.\n");
            break;

        case USER:
            printf("Welcome User! Limited Access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! View Only Access.\n");
            break;

        default:
            printf("Invalid Role.\n");
    }

    return 0;
}