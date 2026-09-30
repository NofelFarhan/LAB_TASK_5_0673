/*
Question:8
A program checks user permissions stored in a single integer variable permissions. The value is a combination of flags: 1 (binary 001) for READ, 2 (binary 010) for WRITE, and 4 (binary 100) for EXECUTE.
The access rules are:
If a user has the EXECUTE permission, print "Access granted: full control".
If a user does NOT have EXECUTE but has both READ and WRITE, print "Access granted: read and write".
If a user has only READ, print "Access granted: read-only".
Otherwise, print "Access denied".
Write a nested if-else statement that uses bitwise operators to check these bits in permissions and prints the correct message.

*/

#include <stdio.h>

int main()
{
    int permissions;

    printf("Enter permissions: ");
    scanf("%d", &permissions);

    if (permissions & 4)
    {
        printf("Access granted: full control\n");
    }
    else
    {
        if ((permissions & 1) && (permissions & 2))
        {
            printf("Access granted: read and write\n");
        }
        else
        {
            if ((permissions & 1) && !(permissions & 2))
            {
                printf("Access granted: read-only\n");
            }
            else
            {
                printf("Access denied\n");
            }
        }
    }

    return 0;
}