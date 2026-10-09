#include <stdio.h>

int main()
{
    int day, month, year;

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12 && day >= 1 && day <= 31)
    {
        printf("Formatted Date: %02d-%s-%04d\n",
               day, months[month - 1], year);
    }
    else
    {
        printf("Invalid date.\n");
    }

    return 0;
}