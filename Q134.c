#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    printf("Enter status (0-Success, 1-Failure, 2-Timeout): ");
    scanf("%d", &choice);

    status = choice;

    switch (status)
    {
        case SUCCESS:
            printf("Operation Successful\n");
            break;

        case FAILURE:
            printf("Operation Failed\n");
            break;

        case TIMEOUT:
            printf("Operation Timed Out\n");
            break;

        default:
            printf("Invalid Status\n");
    }

    return 0;
}