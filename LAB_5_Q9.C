/*
Question:9

A file system stores permissions as a single integer using bit flags: 1 = READ, 2 = WRITE, 4 = EXECUTE, 8 = DELETE, 16 = ADMIN. The system must decode these flags and decide access.
Tasks:
Accept an integer permissions.
If the ADMIN bit (16) is set → Full access: admin
Else if both DELETE (8) and WRITE (2) bits are set → Access: delete and write
Else if EXECUTE (4) is set but WRITE (2) is not → Access: execute only
Else if READ (1) is set and WRITE (2) is not set and EXECUTE (4) is not set → Access: read-only
Else if none of the above bits are set → Access denied
Else → Access: custom permissions
Print which specific bits were detected using bitwise checks.
*/

#include <stdio.h>

int main()
{
    int permissions;

    printf("Enter permissions: ");
    scanf("%d", &permissions);

    /* Check access */
    if (permissions & 16)
    {
        printf("Full access: admin\n");
    }
    else if ((permissions & 8) && (permissions & 2))
    {
        printf("Access: delete and write\n");
    }
    else if ((permissions & 4) && !(permissions & 2))
    {
        printf("Access: execute only\n");
    }
    else if ((permissions & 1) && !(permissions & 2) && !(permissions & 4))
    {
        printf("Access: read-only\n");
    }
    else if (!(permissions & 1) &&
             !(permissions & 2) &&
             !(permissions & 4) &&
             !(permissions & 8) &&
             !(permissions & 16))
    {
        printf("Access denied\n");
    }
    else
    {
        printf("Access: custom permissions\n");
    }

    /* Print detected bits */
    printf("\nDetected permissions:\n");

    if (permissions & 1)
    {
        printf("READ\n");
    }

    if (permissions & 2)
    {
        printf("WRITE\n");
    }

    if (permissions & 4)
    {
        printf("EXECUTE\n");
    }

    if (permissions & 8)
    {
        printf("DELETE\n");
    }

    if (permissions & 16)
    {
        printf("ADMIN\n");
    }

    return 0;
}