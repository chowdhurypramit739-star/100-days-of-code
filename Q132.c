#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light (0-Red, 1-Yellow, 2-Green): ");
    scanf("%d", &choice);

    light = choice;

    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}