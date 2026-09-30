/*
Question:5
A smart home hub selects a mode based on time of day, motion detection, and light level. Each mode leads to different device actions.
Tasks:
Accept time (0–23), motion detected (1/0), and light level (0–100).
Use a menu where the user picks a room (1 = Living Room, 2 = Bedroom, 3 = Kitchen).
Inside each room:
If time is between 6 and 18 and motion = 1 → Day mode: lights ON
If time is between 18 and 23 and motion = 1 → Evening mode: dim lights
If time is between 23 and 6 → Night mode: lights OFF
If no motion → Away mode: all OFF
For Kitchen only, add an extra sub-choice: if the user selects "cooking" (1/0), turn on exhaust fan regardless of motion.
Print the mode and action.
*/

#include <stdio.h>

int main()
{
    int time, motion, light, room, cooking;

    printf("Enter time (0-23): ");
    scanf("%d", &time);

    printf("Enter motion detected (1 = Yes, 0 = No): ");
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    scanf("%d", &light);

    printf("\nSelect Room:\n");
    printf("1. Living Room\n");
    printf("2. Bedroom\n");
    printf("3. Kitchen\n");
    printf("Enter choice: ");
    scanf("%d", &room);

    if (room == 1)
    {
        if (motion == 0)
        {
            printf("Mode: Away mode\n");
            printf("Action: All OFF\n");
        }
        else
        {
            if (time >= 6 && time < 18)
            {
                printf("Mode: Day mode\n");
                printf("Action: Lights ON\n");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Mode: Evening mode\n");
                printf("Action: Dim lights\n");
            }
            else
            {
                printf("Mode: Night mode\n");
                printf("Action: Lights OFF\n");
            }
        }
    }
    else if (room == 2)
    {
        if (motion == 0)
        {
            printf("Mode: Away mode\n");
            printf("Action: All OFF\n");
        }
        else
        {
            if (time >= 6 && time < 18)
            {
                printf("Mode: Day mode\n");
                printf("Action: Lights ON\n");
            }
            else if (time >= 18 && time < 23)
            {
                printf("Mode: Evening mode\n");
                printf("Action: Dim lights\n");
            }
            else
            {
                printf("Mode: Night mode\n");
                printf("Action: Lights OFF\n");
            }
        }
    }
    else if (room == 3)
    {
        printf("Is cooking? (1 = Yes, 0 = No): ");
        scanf("%d", &cooking);

        if (time >= 6 && time < 18 && motion == 1)
        {
            printf("Mode: Day mode\n");
            printf("Action: Lights ON\n");
        }
        else if (time >= 18 && time < 23 && motion == 1)
        {
            printf("Mode: Evening mode\n");
            printf("Action: Dim lights\n");
        }
        else if (time >= 23 || time < 6)
        {
            printf("Mode: Night mode\n");
            printf("Action: Lights OFF\n");
        }
        else
        {
            printf("Mode: Away mode\n");
            printf("Action: All OFF\n");
        }

        if (cooking == 1)
        {
            printf("Action: Exhaust fan ON\n");
        }
    }
    else
    {
        printf("Invalid room selection.\n");
    }

    return 0;
}