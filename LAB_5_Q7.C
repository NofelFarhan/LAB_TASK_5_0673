/*
Question:7
A course advisor suggests a specialization based on the student's stream and interest. Each stream has different interest options.
Tasks:
Ask for stream: 1 = Science, 2 = Commerce, 3 = Arts.
Based on stream, ask for interest:
Science → 1 = Biology, 2 = Physics, 3 = Chemistry
Commerce → 1 = Accounting, 2 = Marketing
Arts → 1 = Literature, 2 = History, 3 = Psychology
Based on stream + interest, print the recommended course.
For Science → Biology, further ask if the student is interested in medicine (1/0) and recommend MBBS or Biotechnology accordingly.
Invalid inputs should print Invalid choice.
*/
#include <stdio.h>

int main()
{
    int stream, interest, medicine;

    printf("Select your stream:\n");
    printf("1. Science\n");
    printf("2. Commerce\n");
    printf("3. Arts\n");
    printf("Enter choice: ");
    scanf("%d", &stream);

    if (stream == 1)
    {
        printf("\nScience Interests:\n");
        printf("1. Biology\n");
        printf("2. Physics\n");
        printf("3. Chemistry\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Are you interested in medicine? (1 = Yes, 0 = No): ");
            scanf("%d", &medicine);

            if (medicine == 1)
            {
                printf("Recommended Course: MBBS\n");
            }
            else if (medicine == 0)
            {
                printf("Recommended Course: Biotechnology\n");
            }
            else
            {
                printf("Invalid choice.\n");
            }
        }
        else if (interest == 2)
        {
            printf("Recommended Course: BS Physics\n");
        }
        else if (interest == 3)
        {
            printf("Recommended Course: BS Chemistry\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    else if (stream == 2)
    {
        printf("\nCommerce Interests:\n");
        printf("1. Accounting\n");
        printf("2. Marketing\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended Course: Accounting and Finance\n");
        }
        else if (interest == 2)
        {
            printf("Recommended Course: Marketing\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    else if (stream == 3)
    {
        printf("\nArts Interests:\n");
        printf("1. Literature\n");
        printf("2. History\n");
        printf("3. Psychology\n");
        printf("Enter interest: ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended Course: Literature\n");
        }
        else if (interest == 2)
        {
            printf("Recommended Course: History\n");
        }
        else if (interest == 3)
        {
            printf("Recommended Course: Psychology\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}